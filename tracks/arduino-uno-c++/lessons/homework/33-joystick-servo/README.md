# Homework 33 — Joystick-Controlled Servo

## Challenge Prompt

_State the problem as assigned._

> Read a single joystick axis and command a servo to mirror its position in
> real time, sweeping the full 0–180° range as the stick travels end to end.

## Engineering Approach

_Outline the design before writing code._

- **Input:** Analog joystick wiper on `A0`, sampled via the 10-bit ADC.
- **Output:** Standard hobby servo on pin 6, driven by the `Servo` library.
- **Transfer function:** Linearly map the ADC range `[0, 1023]` onto the
  servo angle range `[0°, 180°]` using `map()`.
- **Open questions:** Is deadband filtering needed near center? Should motion
  be smoothed to avoid servo jitter from ADC noise?

## Debugging Notes

_Capture what went wrong and how it was resolved._

- [ ] Confirm joystick ground and Vcc orientation before trusting readings.
- [ ] Verify the servo has an adequate external 5 V supply under load.
- [ ] Log raw ADC values over Serial to check for jitter or dead zones.
