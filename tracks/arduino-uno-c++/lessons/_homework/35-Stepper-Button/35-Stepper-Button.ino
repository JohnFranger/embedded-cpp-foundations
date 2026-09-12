/**
 * Lesson 35 - Stepper Motors

 Use a stepper motor with a button to  switch direction

 my personal solution, paul's solution will be added to the original lesson document.
 */

#include <Stepper.h>

//values vary between motors, speed cant be too high find a good one for each motor
int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution,8,10,9,11); 
//rpm
int motSpeed = 10;

int dt = 5;

int butPin = 7;
int butVal;
int butPrev = 1; 

//Clockwise is true, ccw is false
bool curDirection = true; 


void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  pinMode(butPin,INPUT_PULLUP);
}

void loop() {
  butVal = digitalRead(butPin);

  if(butVal == 1 && butPrev == 0){
    curDirection = !curDirection;
  }

  if(curDirection){
    myStepper.step(1);
  } else{
    myStepper.step(-1);
  }


  butPrev = butVal;
  //delay(dt);
}
