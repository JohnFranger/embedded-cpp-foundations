/**
 * Lesson 08 — PWM LED Dimmer
 *
 * Drives an LED through a smooth brightness ramp using hardware PWM.
 * Demonstrates duty-cycle control on an Arduino Uno PWM-capable pin.
 */

// Pin 9 is backed by Timer1 OC1A, giving stable hardware PWM output.
constexpr uint8_t kLedPin = 9;

// Full 8-bit duty-cycle range exposed by analogWrite().
constexpr uint8_t kMinDuty = 0;
constexpr uint8_t kMaxDuty = 255;

// Delay between brightness steps; trades ramp smoothness against speed.
constexpr uint16_t kStepDelayMs = 10;

void setup() {
  pinMode(kLedPin, OUTPUT);
}

void loop() {
  // Ramp up: increasing duty cycle raises average voltage, brightening the LED.
  for (uint8_t duty = kMinDuty; duty < kMaxDuty; ++duty) {
    analogWrite(kLedPin, duty);
    delay(kStepDelayMs);
  }

  // Ramp down: mirror the curve so the cycle is visually symmetric.
  for (uint8_t duty = kMaxDuty; duty > kMinDuty; --duty) {
    analogWrite(kLedPin, duty);
    delay(kStepDelayMs);
  }
}
