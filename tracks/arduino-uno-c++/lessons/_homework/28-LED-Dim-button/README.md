# Homework 28 - LED Dimmer button

## Challenge Prompt


> Use two buttons to brighten or dim an LED light

## Engineering Approach


- **Input:** Two buttons wired to digital pins 2 and 4
- **Output:** Blue LED wired to pin 11. 
- **Open questions:** How can varying the values of the delay and brightness proportionally counter each other.

## Debugging Notes

- [ ] Light went straight on or straight off
  Solved by introducing a slight delay.
- [ ] The down button went down then turned it back on
  It went below 0 because of a <= sign instead of a < sign.
