# Lesson 25 - Photoresistor

## Circuit Concept

- **Goal:** Read values from a photoresistor, understand how it works and how to wire it.
- **Assignment Task:** Above a specific value have one LED on, below have another on.
- **Components:** 2× LED, 1x current-limiting resistor (≈5k Ω), 2x 330ohm current-limiting resistors, jumper wires.
- **Wiring:** 5V -> Photoresistor -> A3 -> 5k ohm resistor -> GND
              Pin 10, 11 -> LED -> 330 ohm resistor -> GND



## Mathematical Proof / Analysis

- **Resistance Calculations:**
  We can only measure voltage so we need to confirm that voltage changes as a result of the resistance.
  I = V/R = 5 / (R_s + 5000)
  V = IR = (5 / (R_s + 5000)) (5000)

##Troubleshooting

  - The circuit wasn't working so I used a multimeter to check the values of my photoresistor. It was working which
    helped me reconize that the issue was a typo for the pin. 

