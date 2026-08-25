# Lesson 12 — Understanding Potentiometers

## Circuit Concept


- **Goal:** Analyze voltage after passing through a potentiometer and understand how it works. 
- **Components:** 1x 10k Ω Potentiometer , jumper wires.
- **Wiring:** 5V → Potentiometer →  GND.

```
D9 ──[ 10kΩ Potentiometer ] ── GND
        A3 to read Values
```

## Mathematical Proof / Analysis

- **Current limiting (Ohm's law):**
  I = V/R = 5V/10000Ω = 0.5mA
  V = IR = (0.5mA)(R) = V_out
- **Converstion Factor:** 
  10 bit number representing 5V -> 1023:5V. So we multiply our measured value by (5./1023.).
  This returns a float so it is important to modify the variable types. 
  