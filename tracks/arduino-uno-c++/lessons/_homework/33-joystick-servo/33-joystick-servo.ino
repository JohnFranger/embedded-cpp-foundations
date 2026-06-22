/**
 * Homework 33 — Joystick-Controlled Servo
 *
 * Maps an analog joystick axis onto a servo's angular position.
 * Reinforces ADC sampling, range mapping, and actuator control.
 */

#include <Servo.h>

// Joystick X-axis wiper feeds an analog-capable input pin.
constexpr uint8_t kJoystickPin = A0;

// Servo signal line; any digital pin can drive the Servo library.
constexpr uint8_t kServoPin = 6;

// ADC resolution bounds (10-bit) and the servo's mechanical sweep.
constexpr uint16_t kAdcMin = 0;
constexpr uint16_t kAdcMax = 1023;
constexpr uint8_t  kServoMinAngle = 0;
constexpr uint8_t  kServoMaxAngle = 180;

Servo armServo;

void setup() {
  armServo.attach(kServoPin);
}

void loop() {
  // Sample the joystick position as a raw 10-bit ADC reading.
  const uint16_t raw = analogRead(kJoystickPin);

  // Translate the ADC range onto the servo's angular range.
  const uint8_t angle = map(raw, kAdcMin, kAdcMax, kServoMinAngle, kServoMaxAngle);

  armServo.write(angle);
}
