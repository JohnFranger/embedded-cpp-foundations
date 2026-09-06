# Homework 27 - Push Buttons as a Switch

## Challenge Prompt

> Use a push button to switch between an on and off state for an LED. 

## Engineering Approach

- **Input:** Push-Button wired with a pull-up resistor
- **Output:** White LED 
- **Open questions:** Why did my delay fix it and why was void loop not able to keep up before?

## Debugging Notes

_Capture what went wrong and how it was resolved._

- This was the hardest problem he has given yet. Of course the wiring stayed the same as from the lesson but
figuring out a way to do in code was a difficult task. I initially thought of recording the current lightState and using that to switch
however the issue was that the void loop runs continuously so when I switch states or let go I cant really measure it actively. 
My first though was how to do this asynchronously but obviously Paul hasn't even remotely taught that so I scratched it.
I first needed to define a change in button states so I looked at having a previous state feature. This then led me to think of waiting until letting go
Then I made my solution
- There was still an issue of flickering at times though which I utilized the serial monitor to analyze. It at times appeared to run the code twice for each click, hence
turning it on and back off or vice versa. I attributed this to a lack of switching quick enough for void loop. Thus I added a negligible 10ms delay solving the issue
