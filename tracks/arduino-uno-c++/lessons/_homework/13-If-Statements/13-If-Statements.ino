/**
 * Homework 13 — Arduino If Statements
 *
 * Drives 3 LEDs by result of a measured voltage through a potentiometer 
 * Similar to warning system, perhaps for a backup camera if partnered with an ultrasonic sensor instead of a potentiometer. 
 */

 int readVal;
 int readPin = A3;

 int waitT = 500;
 float v2;

 int redPin = 12;
 int yelPin = 7;
 int grePin = 4;


void setup() {
  pinMode(readPin, INPUT);

  pinMode(redPin,OUTPUT);
  pinMode(yelPin,OUTPUT);
  pinMode(grePin,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  v2 = (5./1023.)*readVal;
  Serial.print("Potentiometer voltage is ");
  Serial.println(v2);
  delay(waitT);

  
  if(v2 <= 3){
    digitalWrite(redPin,LOW);
    digitalWrite(yelPin,LOW);
    digitalWrite(grePin,HIGH);
  } else if(v2 > 3 && v2 < 4){
    digitalWrite(redPin,LOW);
    digitalWrite(yelPin,HIGH);
    digitalWrite(grePin,LOW);
  } else {
    digitalWrite(redPin,HIGH);
    digitalWrite(yelPin,LOW);
    digitalWrite(grePin,LOW);
  }
  
}
