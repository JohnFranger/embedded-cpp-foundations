# Lesson 27 - Push Buttons

## Circuit Concept

- **Goal:** Enable an LED using a push-button.
- **Components:** 1× LED, 1× current-limiting resistor (≈330 Ω), 1× pull-up resistor (10k Ω), push-button jumper wires.
- **Wiring:** 5V -> 10k Resistor ->   Pin -> Push-Button -> GND
              Pin 8 -> LED -> 330 Resistor -> GND


## Mathematical and Physical Proof / Analysis

- **Button States:**
  Because the button operates between a high and low state one can utilize the transition between a low state directly to a high state 
  in order to run a condition. Going from being held down to coming up.
- **Button Bounce:**
  The physical hardware of a button often causes it to bounce a bit which can lead to slightly odd readings, thus we introduce a slight delay.
  
