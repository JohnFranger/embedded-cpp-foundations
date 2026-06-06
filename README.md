# Embedded C++ Foundations

> A structured, hands-on journey into bare-metal and Arduino-framework embedded
> systems development, with an emphasis on clean C++ practices, electrical
> reasoning, and verifiable engineering analysis.

---

## Project Objective

This repository documents a deliberate, project-by-project path toward
production-grade embedded firmware development. Rather than collecting
disconnected sketches, each lesson is treated as a small engineering
deliverable: a defined circuit, a documented design rationale, and a
mathematical or empirical justification for the chosen approach.

The goal is to demonstrate not only *that* a circuit works, but *why* it
works — the kind of reasoning expected of a professional embedded engineer.

## Key Engineering Concepts Mastered

- **Modern C++ on constrained targets** — `constexpr` configuration, scoped
  enums, and zero-cost abstractions that compile down cleanly on an 8-bit MCU.
- **Digital & analog I/O** — debouncing, edge detection, and ADC sampling.
- **PWM & signal generation** — duty-cycle control for dimming, motor speed,
  and servo actuation.
- **Timing & concurrency** — non-blocking loops, `millis()`-based scheduling,
  and interrupt-driven event handling.
- **Communication protocols** — UART, I²C, and SPI peripheral integration.
- **Hardware reasoning** — Ohm's law, voltage dividers, current limiting, and
  power budgeting.

## Hardware Stack

| Layer        | Component                                             |
| ------------ | ----------------------------------------------------- |
| MCU Board    | Arduino Uno (ATmega328P, 16 MHz, 5 V logic)           |
| Toolchain    | Arduino CLI / Arduino IDE 2.x · avr-gcc · PlatformIO  |
| Editor       | VS Code with C/C++ extension                          |
| Prototyping  | Solderless breadboard, jumper wires, discrete passives|
| Instruments  | Digital multimeter (placeholder for future logic analyzer) |

## Repository Directory Map

```
embedded-cpp-foundations/
├── README.md                     # This portfolio landing page
├── .gitignore                    # Build artifact & IDE noise filter
└── tracks/
    └── arduino-uno-c++/
        ├── components/           # Reusable drivers & shared libraries
        └── lessons/
            ├── 08-pwm-dimmer/    # Guided lesson example
            └── homework/         # Self-directed challenge problems
                └── 33-joystick-servo/
```

Each lesson and homework folder is self-contained: a single `.ino` sketch
paired with a local `README.md` that captures the circuit concept and the
analysis behind it.
