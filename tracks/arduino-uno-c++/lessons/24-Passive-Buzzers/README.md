# Lesson 24 - Passive Buzzers

## Circuit Concept

- **Goal:** Learn to use an active buzzer.
- **Assignment Goal:** Modify the pitch by using a potentiometer.
- **Components:** 1x Passive Buzzer, potentiometer, jumper wires.
- **Wiring:** Pin 9 -> Buzzer -> GND
              5V -> Potentiometer, A2 -> GND
```

## Mathematical Proof / Analysis

- **Conversion Factor:** 
  Using a linear relationship we can determine the conversion factor. 
  First we know that we have a y-intercept of 60. 
  Next we know our maximum and minimum value so that we can use (y2-y1)/(x2-x1) to calculate slope.
  This gives a linear equation. 
  
## Troubleshooting

 - Using the serial monitor is a great way to double check values, however when using it for this it introduces unnecessary delays which throw off the other delays.
 