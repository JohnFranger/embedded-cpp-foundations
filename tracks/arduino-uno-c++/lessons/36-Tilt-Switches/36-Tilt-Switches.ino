/**
 * Lesson 36 - Tilt Switches
 
 Works by opening or closing a circuit with a metal ball

 In class homework I did it in the _homework folder this doc will show his solution
 */

int tiltPin = 2;
int tiltVal;

int grePin = 5;
int redPin = 13;


void setup() {
  pinMode(tiltPin,INPUT_PULLUP);
  pinMode(grePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if(tiltVal == 0){
    digitalWrite(grePin, HIGH);
    digitalWrite(redPin, LOW);
  }
  if(tiltVal == 1){
    digitalWrite(grePin, LOW);
    digitalWrite(redPin, HIGH);
  }


}
