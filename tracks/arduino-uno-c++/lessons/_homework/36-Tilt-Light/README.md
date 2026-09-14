# Homework 36 - Tilt Switch Light

## Challenge Prompt

> Read the state of a tilt switch and use conditional statements
> to turn on the correct LED, proving a visual representation of 
> the tiltVal.

## Engineering Approach

- **Input:** Tilt Switch connected to pin 2.
- **Output:** Green and Red LEDs wired to pins 5 and 13, respectively.
- **Open questions:** In a real situation how can external conditions casue issues with the tilt switch's readings?

## Debugging Notes

_Capture what went wrong and how it was resolved._

- [ ] Confirm joystick ground and Vcc orientation before trusting readings.
- [ ] Verify the servo has an adequate external 5 V supply under load.
- [ ] Log raw ADC values over Serial to check for jitter or dead zones.
