/**
 * Lesson 37 - DC Motors

  THe notch on the L293D shows the side with 1 and 16.

  Left side controls one motor, right side controls another

  EN1 - Speed of motor analog
  IN1/2 - Directions on pin 2 and 7, one high one low
  OUT1/2 - Red goes to pin 3 on chip, black goes to pin 6 
  0V - GND on pin 4 and 5
  +Vmotor - Power supply on 8. 

  Mirrored on opposite side

 */

  int speedPin = 5;
  int dir1 = 4;
  int dir2 = 3;

  int mSpeed = 90;


void setup() {
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  //Kickstart
  analogWrite(speedPin,255);
  delay(25);
  analogWrite(speedPin,mSpeed);
  delay(5000);
}
