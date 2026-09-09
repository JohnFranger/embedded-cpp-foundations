# Lesson 31 - Simple Servo Project

## Circuit Concept

- **Goal:** Vary angle of a servo motor with respect to light levels in room
- **Components:** 1x Servo, 1x photoresistor, 5k ohm resistor, jumper wires
- **Wiring:** 5V -> Servo Red, GND -> Servo Brown, Pin 9 -> Servo Orange
              5V -> photoresistor -> A3 -> 5K ohm resistor -> GND


## Mathematical Proof / Analysis

_Justify the component values and expected behavior._

- **Conversion Factor:**
  The math for the conversion factor was done and demonstrated in the comments for void loop.
  It was just a simple linear regression involving two points. 
