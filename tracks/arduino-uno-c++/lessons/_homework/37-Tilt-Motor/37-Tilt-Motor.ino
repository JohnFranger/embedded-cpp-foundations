/**
 * Homework 37 - Tilt Motor

 */

  int speedPin = 5;
  int dir1 = 4;
  int dir2 = 3;

  int mSpeed = 255;

  int tiltPin = 12;
  bool tiltVal;


void setup() {
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);

  pinMode(tiltPin,INPUT_PULLUP);
}

void loop() {
  tiltVal = digitalRead(tiltPin);

  if(tiltVal){
    mSpeed = 0;
  } else{
    mSpeed = 255;
  }

  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  //Kickstart
  analogWrite(speedPin,mSpeed);
}
