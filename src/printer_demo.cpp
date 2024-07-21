/*
  ESP32 demo to print images and text using PT48GE thermal printer
*/
#include <Arduino.h>
#include <SPI.h>
#include "AccelStepper.h"
#include "WiFi.h"
#include "secrets.h"
#include <WiFi.h>
#include <ESPAsyncWebServer.h>

#include "PT48GE.hpp"

AsyncWebServer server(80);
AsyncWebSocket ws("/ws");           // access at ws://[esp ip]/ws
AsyncEventSource events("/events"); // event source (Server-Sent events)

#ifndef SSID
const char *ssid = "your-ssid";
const char *password = "your-pass";
#else
const char *ssid = SSID;
const char *password = PASSWORD;
#endif

const char *http_username = "admin";
const char *http_password = "admin";

SPIClass vspi = SPIClass(HSPI);

#define MotorInterfaceType 1
AccelStepper stepper = AccelStepper(MotorInterfaceType, 2,15);

PT48GE::PT48GE thermal_printer = PT48GE::PT48GE();
String message = "";
String texto = "";

void move_motor_forward(void)
{
  stepper.setSpeed(-70);
  stepper.runSpeed();
}

void move_motor_backward(void)
{
  stepper.setSpeed(70);
  stepper.runSpeed();
}

void imprimir_espacio(void)
{
  for (size_t count = 0; count < 1000; ++count)
  {
    move_motor_forward();
    delay(1);
  }
}

void setup()
{
  thermal_printer.initialize();
  thermal_printer.set_move_motor_function(move_motor_forward);

  stepper.setMaxSpeed(1000);
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }

  Serial.println(WiFi.localIP());
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
            {
 
    int paramsNr = request->params();
    Serial.println(paramsNr);
 
    for(int i=0;i<paramsNr;i++){
 
        AsyncWebParameter* p = request->getParam(i);
        Serial.print("Param name: ");
        Serial.println(p->name());
        if(strcmp(p->name().c_str(), "message") == 0){
            Serial.print("Param value: ");
            Serial.println(p->value());
            message = p->value();
        } else if (strcmp(p->name().c_str(), "texto") == 0){
            Serial.print("Param value: ");
            Serial.println(p->value());
            texto = p->value();
        }
    }
 
    request->send(200, "text/plain", "message received"); });

  server.begin();
}

void loop()
{

  // Imprimir imagen
  if (message != "")
  {

    unsigned int potencia;
    for (potencia = 80; potencia <= 255; potencia += 20){
      Serial.println("Potencia: " + String(potencia));
      thermal_printer.set_power(potencia);
      thermal_printer.print_text(message.c_str());

      thermal_printer.set_move_motor_function(move_motor_backward);
      thermal_printer.print_text(" ");
      thermal_printer.set_move_motor_function(move_motor_forward);
      message = " " + message;
    }

    message = "";

    // Limpiar el buffer de la impresora
    thermal_printer.clear_printer();

    // Espacio para separar la imagen
    imprimir_espacio();
  }

  if (texto != "")
  {

    thermal_printer.set_power(500);
    thermal_printer.print_text(texto.c_str());
    texto = "";

    // Limpiar el buffer de la impresora
    thermal_printer.clear_printer();
  }

  delay(100);
}
