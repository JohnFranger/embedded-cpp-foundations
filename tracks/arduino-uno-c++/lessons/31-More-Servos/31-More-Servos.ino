/**
 * Lesson 31 - Simple Servo Project

 Re-doing the homework from lesson 30. 

My solution is in the _homework folder

 */

 #include <Servo.h>

 int servoPin = 9;
 Servo myServo;
 int servoAngle;

 int photoPin = A3;
 int lightVal; 

 int dT = 250;


void setup() {
  pinMode(photoPin, INPUT);
  Serial.begin(9600);  
  myServo.attach(servoPin);
  pinMode(servoPin,OUTPUT);
}

void loop() {
  lightVal=analogRead(photoPin);
  Serial.println(lightVal);
  delay(dT);

  //Paul light Values
  //Lights on 780
  //Lights off 150
  //Minimum angle 0
  //Max angle 160
  //Point 1 (780,0)
  //Point 2 (150, 160)
  // m = (y2-y1)/(x2-x1) where x is the photoVal and y is the angle
  // m = 160/(-630) = -16/63
  // y - y1 = m(x-x1)
  // Angle - 0 = [-16/63](LV-780)

 servoAngle = (-16./63.)*(lightVal-780.);
 myServo.write(servoAngle);


}
