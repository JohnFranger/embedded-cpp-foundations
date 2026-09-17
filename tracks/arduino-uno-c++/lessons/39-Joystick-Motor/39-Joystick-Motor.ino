/**
 * Lesson 39 - Joystick Motor
 
The homework from lesson 38 but paul style

 */

int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed;

int yPin = A3;
int yVal;

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(yPin, INPUT);
}

void loop() {
  //Don't tell paul but i didnt do the math i just copied him cause I've already done it also 
  // its literally just a linear regression between two points its not all that crazy
  yVal = analogRead(yPin);

  if (yVal < 512){
    mSpeed = (-255./512.)* yVal + 255;
    analogWrite(speedPin, mSpeed);
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
  }
  if (yVal >= 512){
    mSpeed = (255./512.) * yVal - 255;
    analogWrite(speedPin, mSpeed);
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
  }

}
