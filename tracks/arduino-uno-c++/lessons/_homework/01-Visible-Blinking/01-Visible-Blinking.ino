/**
 * Homework 01 — Visible Blinking
 *
 * CaSuse the LED to blink as fast as possible while still blinking visibly.
 * 
 */

// Built in led
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

//At 17 slight flickering is visible but not actual blinking. 
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(20);
  digitalWrite(ledPin, LOW);
  delay(20);
}
