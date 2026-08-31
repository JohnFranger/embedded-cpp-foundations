# Lesson 21 - Mixing Colours

## Circuit Concept

_Describe the physical circuit here._

- **Goal:** Use Serial Monitor to select and display a colour. 
- **Components:** 1× RGB LED, 3× current-limiting resistor (≈330 Ω), jumper wires, ping pong ball (lamp shade).
- **Wiring:** Pin 6,9,10 → resistor → LED anode; LED cathode → GND.

```
6,9,10 ──[ 330Ω ]──▶|── GND
                LED
```

## Mathematical Proof / Analysis

_Justify the component values and expected behavior._

- As there are 256 possibilities per pin, there are a total of 256^3 colours that can be made, or approximately 16.8 million. 
