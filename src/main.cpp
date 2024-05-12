#include <Arduino.h>
#include <SPI.h>
#include "AccelStepper.h"
#include "PT48GE.hpp"
#include "pibe.h"
// #include "degrade.h"
// #include "sushi.h"
// #include "cumple.h"

SPIClass vspi = SPIClass(HSPI);

#define MotorInterfaceType 4
AccelStepper stepper = AccelStepper(MotorInterfaceType, 4, 0, 2, 15);

PT48GE::PT48GE thermal_printer = PT48GE::PT48GE();

void move_motor(void)
{
  stepper.setSpeed(-100);
  stepper.runSpeed();
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
  // thermal_printer.print_pixel_from_array(imagen, sizeof(imagen));

  // Probar función de imprimir texto
  const char *frase = "Esto es una frase muy larga para probar el funcionamiento de la impresora termica";
  thermal_printer.print_text(frase);


  // Limpiar el buffer de la impresora
  thermal_printer.clear_printer();

  // Espacio para separar la imagen
  // for (size_t count = 0; count < 1000; ++count)
  // {
  //   move_motor();
  //   delay(1);
  // }

  while (1)
    ;
}