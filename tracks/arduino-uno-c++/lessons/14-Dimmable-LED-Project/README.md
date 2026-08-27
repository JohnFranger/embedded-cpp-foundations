# Lesson 14-Dimmable-LED-Project

## Circuit Concept

_Describe the physical circuit here._

- **Goal:** Smoothly vary the brightness of an LED using pulse-width modulation and a potentiometer. 
- **Components:** 1× LED, 1× current-limiting resistor (≈220 Ω), jumper wires.
- **Wiring:** Pin 9 → resistor → LED anode; LED cathode → GND. 
              5V → Potentiometer | A3 → GND

```
Pin 6 ──[ 330Ω ]──▶|── GND
                  LED
5V → Potentiometer | A3 → GND
```

## Mathematical Proof / Analysis

- **Conversion Factor:**
  Because the potentiometer analogReads a value between 0 and 1023, and analogWrite takes in a value between 0 ad 255 we must convert the by setting up a ratio
  or a linear expression. *Math will be formally attached as a pdf*
