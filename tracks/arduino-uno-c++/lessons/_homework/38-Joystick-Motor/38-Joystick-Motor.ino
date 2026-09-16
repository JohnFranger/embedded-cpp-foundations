/**
 * Homework 38 - Joystick Motor

 My solution to the task in lesson 39 given at the end of lesson 38. 

 I used the map function instead of doing math jsut to try it out,
 don't tell Paul or he'll kill me
 */

 int yPin = A3;
 int yVal;

 int speedPin = 5;
 int dir1 = 4;
 int dir2 = 3;
 float mSpeed = 0;

  

void setup() {
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(yPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  yVal = analogRead(yPin);
  Serial.println(yVal);
  delay(250);

  if(yVal < 500){
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    mSpeed = map(yVal, 520, 0, 50, 255);
    analogWrite(speedPin,mSpeed);
  } else if(yVal > 520){
    digitalWrite(dir2, HIGH);
    digitalWrite(dir1, LOW);
    mSpeed = map(yVal, 520, 1023, 50, 255);
    analogWrite(speedPin,mSpeed);
  }
}
