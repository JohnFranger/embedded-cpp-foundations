/**
 * Lesson 01 — Setting Up
 *
 * First Lesson to get accustomed to using the board and IDE
 *
 * This lesson uses the led on Pin 13 so no circuit must be made.
 *
 */

// Build in led
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(900);
  digitalWrite(ledPin, LOW);
  delay(100);
}
