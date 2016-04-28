#include "Servo.h"
Servo servo;
#include "pins.h"
#include "motor.h"
#include "movements.h"
#include "comunicacion.h"

void setup()
{
   
  Serial.begin(9600);               // inicio de puerto serie
  Serial.println("System On-Line");
  pinmode(1);                       // definicion de pines, enable
  servo.write(pos_ini_servo);       // posicion inicial del servo
   
}

void loop()
{
  
  begin_com();
  
}
