#include <Arduino.h>
#include <SPI.h>
#include "AccelStepper.h"
#include "pibe.h"

int dst_pin = 16;
int latch_pin = 17;
SPIClass vspi = SPIClass(HSPI);

#define MotorInterfaceType 4
AccelStepper stepper = AccelStepper(MotorInterfaceType, 4, 0, 2, 15);

void setup()
{
  SPI.begin();

  // Config SPI speed
  SPI.setClockDivider(SPI_CLOCK_DIV16);
  // Config pins
  pinMode(dst_pin, OUTPUT);
  pinMode(latch_pin, OUTPUT);

  digitalWrite(SS, HIGH);
  digitalWrite(dst_pin, LOW);
  digitalWrite(latch_pin, HIGH);

  stepper.setMaxSpeed(1000);
}

void pin_sequence(float speed)
{
  delayMicroseconds(10);
  digitalWrite(latch_pin, LOW);
  delayMicroseconds(10);
  digitalWrite(latch_pin, HIGH);
  delayMicroseconds(30);
  digitalWrite(dst_pin, HIGH);
  delayMicroseconds(100);
  digitalWrite(dst_pin, LOW);
  stepper.setSpeed(speed);
  stepper.runSpeed();
}

unsigned int line_buffer[12] = {0};

void write_buffer_pixel_index(unsigned int index)
{

  // reset line buffer
  for (int i = 0; i < 12; ++i)
    line_buffer[i] = 0;
  unsigned int char_index = index % 32;
  unsigned int line_index = index / 32;
  line_buffer[line_index] |= (0x1 << char_index);

  for (int i = 12; i >= 0; --i)
    SPI.write32(line_buffer[i]);
}
size_t image_index = 0;

void loop()
{

  while (image_index < sizeof(imagen) - 48)
  {
    for (unsigned int j = 0; j < 5; ++j)
    {
      for (int i = 0; i < 48; ++i)
      {
        SPI.write(imagen[image_index + i]);
      }
      pin_sequence(-480);
    }
    image_index += 48;
  }
  for (int i = 0; i < 48; ++i)
  {
    SPI.write(0x00);
  }

  // Espacio para separar la imagen
  size_t count = 0;
  while (count < 200)
  {
    count++;
    stepper.setSpeed(-500);
    stepper.runSpeed();
    delay(1);
  }

  while (1);
}