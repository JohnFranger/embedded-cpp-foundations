# Homework 60 - Reduce Noise

## Challenge Prompt

> Make it so there is less noise in each measurement

## Engineering Approach

- **Input:** Button and US Sensor
- **Output:** LCD Screen
- **Open questions:** Is there a way to actually make the sensor work better

- **Strategy:** As with most things I decided to reduce noise by just taking an average.
  - I had to learn to use C# for each loops
  - Had to learn arrays and use a const int for array size

## Debugging Notes

- This introduced a slight pause as the array gets bigger
- My button wasn't working because it had gotten unplugged, took me a while to figure it out
- The position of the foreach loop caused issues, had to ensure it was in the right spot so it didn't
  overcalculate
