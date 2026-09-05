# Lesson 27 - Push Buttons

## Circuit Concept

- **Goal:** Enable an LED using a push-button.
- **Components:** 1× LED, 1× current-limiting resistor (≈330 Ω), 1× pull-up resistor (10k Ω), push-button jumper wires.
- **Wiring:** 5V -> 10k Resistor ->   Pin -> Push-Button -> GND
              Pin 8 -> LED -> 330 Resistor -> GND


## Mathematical and Physical Proof / Analysis

- **Pull-Up Resistor:**
  The digital read pin gets confused by random charges in the environment so the resistor stops these from causing concerns. (Impedence)
  When the circuit is open (button not pressed) there is no voltage drop, we recognize the full 5V so we read HIGH or "1".
  When the circuit closes all of a sudden we have a current so the voltage drops.
  I = V/R -> I = 5/10k = 0.5mA but now V = IR the voltage drops by IR = (0.5mA)(10k) so we end up with no voltage.
- **Pull-Down Resistor:**
  This works much the same way but switches the way inputs are processed. The resistor initially still removes impedence.
  Next with the open circuit we don't read any voltage so we read a 0. With the circuit open voltage passes through the button, into
  the pin, reads a 1, and the rest to GND.
