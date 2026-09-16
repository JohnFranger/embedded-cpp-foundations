# Homework 33 — Joystick-Controlled Servo

## Challenge Prompt

> Read a position from the y of the joystick and control the speed of the joystick 
> with respect to it. Going opposite direction switches fan direction. 

## Engineering Approach

- **Input:** Analog joystick on A3 -> VRy.
- **Output:** DC Motor.
- **Transfer function:** Linearly map the range `[511, 1023]` onto the
  servo speed `[50, 255]` using `map()`. Map the same from `[511, 0]`
  to speed `[50,255]` albeit switch the direction.
- **Open questions:** N/A

## Debugging Notes

_Capture what went wrong and how it was resolved._

- [ ] Joystick wasn't reading values, I had it wired to the power supply module without the battery 
      in. 
