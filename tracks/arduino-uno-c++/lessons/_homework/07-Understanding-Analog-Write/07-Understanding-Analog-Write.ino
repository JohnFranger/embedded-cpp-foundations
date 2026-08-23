/*

Homework 07 — Testing PWM with an led. 

Change brightness on a delay with an LED.

*/

int redPin = 11; 
int brightnesses[] = {0,50,100,150,200,255};
int delayTime = 1000;
int delayDecr = 150;


void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  delayTime = 1000;
  for(int brightness : brightnesses){
    analogWrite(redPin,brightness);
    delay(delayTime);
    delayTime -= delayDecr;
  }
}
