#include <Arduino.h>
#include <SPI.h>
#include "AccelStepper.h"
#include "PT48GE.hpp"
#include "pibe.h"
// #include "degrade.h"
// #include "sushi.h"
// #include "cumple.h"

SPIClass vspi = SPIClass(HSPI);

#define MotorInterfaceType 1
AccelStepper stepper = AccelStepper(MotorInterfaceType, 15, 2);

PT48GE::PT48GE thermal_printer = PT48GE::PT48GE();

void move_motor(void)
{
  stepper.setSpeed(-400);
  stepper.runSpeed();
}

void imprimir_espacio(void)
{
  for (size_t count = 0; count < 1000; ++count)
  {
    move_motor();
    delay(1);
  }
}

void setup()
{
  thermal_printer.initialize();
  thermal_printer.set_move_motor_function(move_motor);

  stepper.setMaxSpeed(1000);
}

void loop()
{

  // Imprimir imagen

  thermal_printer.print_pixel_from_array(imagen, sizeof(imagen));
  imprimir_espacio();

  const char *frase4 = "CORTAR--AQUI-------B<--------";
  thermal_printer.print_text(frase4);
  imprimir_espacio();

  // Limpiar el buffer de la impresora
  thermal_printer.clear_printer();

  // Espacio para separar la imagen
  imprimir_espacio();

  while (1)
    ;
}