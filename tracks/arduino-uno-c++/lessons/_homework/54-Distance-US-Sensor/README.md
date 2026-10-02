# Homework 54 - Ultrasonic Sensor -> Distance

## Challenge Prompt

> Read a micros value from sensor and convert it to real world distance

## Engineering Approach

- **Input:** Ultrasonic Sensor
- **Output:** Serial Monitor
- **Transfer function:** Use speed of sounds and unit conversions
- **Open questions:** N/A

## Debugging Notes

_Capture what went wrong and how it was resolved._

- I was getting super small values. I accidentally divided by 100 instead of 
  multiplying for cms. 