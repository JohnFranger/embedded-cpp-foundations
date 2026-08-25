# Homework 10 — Using AnalogRead to confirm calculations (in README) regarding voltage and Ohm's Law. 

## Challenge Prompt

> Calculate the voltage passing through each resistor using Ohm's law and confirm with analogRead.
> Use proper engineering practice like variables. 

## Engineering Approach

- **Input:** AnalogPin for voltage.
- **Output:** Console output.
- **Open questions:** What about going in reverse and finding the resistance of an unknown resistor using the voltage. 

## Calculations

- I = V/R. The first resistor was 10Ω and the second was 1000Ω.
  I = 5V/1010Ω = 4.95e-3A or 4.95mA

- V = IR. Do this for each resistor.
  V = IR_1 = (4.95e-3)(1000) = 4.95V
  V = IR_2 = (4.95e-3)(10) = 0.0495V
  Check: 4.95 + 0.0495 ~= 5.0v 


## Debugging Notes

- The code was identical to the lesson. 
- Learn to differentiate resistors. 
