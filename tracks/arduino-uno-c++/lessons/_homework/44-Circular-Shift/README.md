# Homework 44 - Circular Shift

## Challenge Prompt

> Run a circular shift on a binary bit vizualized by LEDs
> Make it shift left or right

## Engineering Approach

- **Input:** N/A
- **Output:** LEDs driven by 74HC595
- **Open questions:** N/A

## Mathematical Analysis

- My solution was to just pluck off the most signicant or least significant bit because
the bit slide operation (/2 or *2) with a byte data type loses those numbers. Afterwards,
I just reinput it into the correct slot which was either slot one (easier) or the MSB which
first required a multiplication by 2^7. 

## Debugging Notes

- N/A
