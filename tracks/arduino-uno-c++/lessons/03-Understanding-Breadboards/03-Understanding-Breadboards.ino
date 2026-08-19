/**
 * Lesson 03 — Understanding Breadboards
 *
 * Learning how to use a breadboard to build a circuit.
 * The end result is to have a working LED. 
 */

//Could be any pin
int ledPin1 = 13; 

void setup() {
  pinMode(ledPin1, OUTPUT);
  
}

void loop() {
  digitalWrite(ledPin1,HIGH);

}


