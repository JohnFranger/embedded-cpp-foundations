# Homework 33 — Joystick-Controlled Servo

## Challenge Prompt

> Read the light value from the room and create a "dial" with the servo motor 
> which changes value in real time based on the light.

## Engineering Approach

- **Input:** Photoresistor in A3.
- **Output:** Standard servo on pin 9, driven by the `Servo` library.
- **Transfer function:** Linearly map the photoresistor range `[50, 750]` onto the
  servo angle range `[0°, 180°]` using math, calculations in loop as comment.
- **Open questions:** Should motion
  be smoothed to avoid servo jitter from ADC noise?

## Debugging Notes

- N/A
