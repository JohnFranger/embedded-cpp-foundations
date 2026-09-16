/**
 * Lesson 38 - Tilt Motor

 Completing the homework from previous lesson. My solution was in _homework, number 37
 */

  int speedPin = 5;
  int dirPin1 = 4;
  int dirPin2 = 3;
  int mSpeed = 255;

  int tiltPin = 12;
  int tiltVal;

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  
  pinMode(tiltPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  //0 is not tilted, 1 is tilted 
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, LOW);
  tiltVal = digitalRead(tiltPin);

  if(tiltVal == 0){
    analogWrite(speedPin,mSpeed);
  }
  if(tiltVal == 1){
    analogWrite(speedPin, 0);
  }

}
