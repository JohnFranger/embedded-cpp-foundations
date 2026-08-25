# Lesson 10 — Analog Read

## Circuit Concept


- **Goal:** Measure the voltage along a resistor using analogRead
- **Components:** 2× current-limiting resistor (330&100 Ω), jumper wires.
- **Wiring:** Pin A3 → 330Ω resistor → 100Ω resistor → GND.

```
A3 ──[ 330Ω ]──[ 100Ω ]── GND
              
```

## Mathematical Proof / Analysis

- **Current limiting (Ohm's law):**
  V = IR = (11.63e-3A)(100Ω) = 1.16V
- **Converstion Factor:** 
  10 bit number representing 5V -> 1023:5V. So we multiply our measured value by (5./1023.).
  This returns a float so it is important to modify the variable types. 
  
