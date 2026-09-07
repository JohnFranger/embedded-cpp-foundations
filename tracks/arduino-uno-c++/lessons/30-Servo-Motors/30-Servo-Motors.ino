/**
 * Lesson 30 - Understanding and Using Servo Motors

 When using other Servos ensure you have enough power on the arduino you may need an external power source.

 They work by rotating to a specific angle.

 */

#include <Servo.h>

int servoPin = 9;
int servoPos = 165; 

Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  Serial.println("What angle for the servo?");
  while(Serial.available() == 0){

  }
  servoPos = Serial.parseInt();

  myServo.write(servoPos);
}
