# Lesson 08 — PWM LED Dimmer

## Circuit Concept

_Describe the physical circuit here._

- **Goal:** Smoothly vary the brightness of an LED using pulse-width modulation.
- **Components:** 1× LED, 1× current-limiting resistor (≈220 Ω), jumper wires.
- **Wiring:** Pin 9 → resistor → LED anode; LED cathode → GND.

```
D9 ──[ 220Ω ]──▶|── GND
                LED
```

## Mathematical Proof / Analysis

_Justify the component values and expected behavior._

- **Current limiting (Ohm's law):**
  `I = (Vcc − V_LED) / R = (5 V − 2 V) / 220 Ω ≈ 13.6 mA`
  — safely within the ATmega328P per-pin limit of 40 mA.
- **Effective brightness (duty cycle):** Average voltage scales linearly with
  the 8-bit duty value `D`: `V_avg = Vcc × (D / 255)`.
- **PWM frequency:** Pin 9 defaults to ~490 Hz — fast enough to appear
  flicker-free to the human eye (well above the ~60 Hz flicker-fusion threshold).
