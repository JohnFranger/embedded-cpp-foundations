# Lesson 13 — Arduino If Statements

## Circuit Concept

- **Goal:** Light an LED as a result of a value read from a potentiometer. 
- **Components:** 1× LED, 1× current-limiting resistor (≈220 Ω), jumper wires, 1x potentiometer. 
- **Wiring:** Pin 9 → resistor → LED anode; LED cathode → GND.

```
9 ──[ 330Ω ]──▶|── GND
            LED
5V ── Potentiometer ── GND
      AnalogReading
```

## Mathematical Proof / Analysis


- **Current limiting (Ohm's law)**
- **Converstion Factor:** 
  10 bit number representing 5V -> 1023:5V. So we multiply our measured value by (5./1023.).
  This returns a float so it is important to modify the variable types. 
