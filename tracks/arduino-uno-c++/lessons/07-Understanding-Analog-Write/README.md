# Lesson 07-Understanding-Analog-Write

## Circuit Concept


- **Goal:** Smoothly vary the brightness of an LED using pulse-width modulation and analog write.
- **Components:** 1× LED, 1× current-limiting resistor (≈220 Ω), jumper wires.
- **Wiring:** Pin 11 → resistor → LED anode; LED cathode → GND.

```
D11 ──[ 330Ω ]──▶|── GND
                LED
```

## Mathematical Proof / Analysis


- **Current limiting (Ohm's law):**
- **Effective brightness (duty cycle):** Average voltage scales linearly with the 8-bit  value 
