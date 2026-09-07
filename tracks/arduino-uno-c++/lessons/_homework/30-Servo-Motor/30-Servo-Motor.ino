/**
 * Homework 30 - Use a photoresistor to control a servo motor as almost a light sensor display.


 */

#include <Servo.h>

int servoPin = 9;

int photoPin = A3;

//Usually between 50 and 750
int photoVal;

//The angle can be between 0 and 160. 
float servoAngle = 0;

Servo myServo;

int dT = 250;

void setup() {
  myServo.attach(servoPin);
  pinMode(photoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  photoVal = analogRead(photoPin);
  Serial.print("photoVal: ");
  Serial.print(photoVal);
  Serial.print(", servoAngle: ");
  Serial.println(servoAngle);

  //In order to convert we use the photoVal as the independent variable and the angle as the dependent
  // Some points we have are (50, 0) and (750, 160). That equates to a slope of 170/700. 
  // servoAngle = (160/700) * photoVal + b
  //We can use the first point in order to find the y-intercept
  // 0 = (160/700)*50 + b -> b = - 160/14 = -80/7

  servoAngle = (170./700.)*photoVal - 80./7.;

  myServo.write(servoAngle);

  delay(dT);
}
