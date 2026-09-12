/**
 * Lesson 35 - Stepper Motors

 Very precise, works in steps

 At low rpm lots of torque 

 Wiring: ensure common ground. 9V battery to power supply and the stepper driver goes to the 5v from the power supply. 
 In1-4 -> 8-11 respectively 


 ----------------------------------------------------------

 Homework was to make it switch with a button. that can be seen in the homework folder this will contain Paul's solution


 */

#include <Stepper.h>

//values vary between motors, speed cant be too high find a good one for each motor
int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution,8,10,9,11); 
//rpm
int motSpeed = 10;

int dt = 50;

int butPin = 7;
int motDir = 1;
int butValNew;
int butValOld = 1;

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  //Again, this is outdated
  pinMode(butPin,INPUT);
  digitalWrite(butPin,HIGH);
}

void loop() {
  butValNew = digitalRead(butPin);

  if(butValOld == 0 && butValNew == 1){
    //Serial.println("Switching");
    motDir = motDir*(-1);
    delay(dt);
  }

  //Serial.print("Stepping one step: ");
  //Serial.println(motDir);
  myStepper.step(motDir*1);

  butValOld = butValNew;
}
