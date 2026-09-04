# Lesson 26 - More Photoresistor Fun

## Circuit Concept

- **Goal:** Smoothly vary the tone of a passive buzzer using a photoresistor.
- **Components:** 1× Passive Buzzer, 1× current-limiting resistor (≈5k Ω), 1x Photoresistor, jumper wires.
- **Wiring:** 5V -> Photoresistor -> A3 -> 5k Resistor -> GND
              Pin 9 -> Passive Buzzer -> GND


## Mathematical Proof / Analysis

- **Conversion Factor:**
  The maximum value for the buzzer was 10k microseconds and minimum was about 100. 
  The values for the photoresistor range from 50 up to about 750 on average unless I shine a light directly on it. 
  The function of delayTime in terms of the photoVal must have a y-intercept of 100 and a maximum value of 10000. 
  Thus the slope must be (maxy-miny = 10000-100) / (maxVal-minVal = 750 - 50)
  delayTime(photoVal) = (9900/700) * photoVal + 100
 