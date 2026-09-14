/**
 * Homework 36 - Tilt Switch Lights
 *
 * Use LEDs to represent the values of a tiltswitch 
 *
 */

int redPin = 13;
int grePin = 5;

int tiltPin = 2;
bool tiltVal;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(grePin, OUTPUT);
  pinMode(tiltPin, INPUT_PULLUP);
}

void loop() {
  tiltVal = digitalRead(tiltPin);
  
  if(tiltVal){
    digitalWrite(redPin, HIGH);
    digitalWrite(grePin, LOW);
  } else{
    digitalWrite(grePin, HIGH);
    digitalWrite(redPin, LOW);
  }
}
