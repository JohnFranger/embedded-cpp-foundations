/**
 * Homework 04 — Understanding Variables
 *
 * Similar to assignment 3 but make the lights blink at different speeds and different times. Variables must be used.
 * 
 */

int redPin = 11; //5 Times fast
int greenPin = 8; //10 Times slow
int bluePin = 5; //15 Times very slow
int redDelay = 100;
int greenDelay = 400;
int blueDelay = 800;

int finalWait = 3000;


void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {

  for(int i = 0; i < 5; i++){
    digitalWrite(redPin,HIGH);
    delay(redDelay);
    digitalWrite(redPin,LOW);
    delay(redDelay);
  }
  for(int i = 0; i < 10; i++){
    digitalWrite(greenPin,HIGH);
    delay(greenDelay);
    digitalWrite(greenPin,LOW);
    delay(greenDelay);
  }
  for(int i = 0; i < 15; i++){
    digitalWrite(bluePin,HIGH);
    delay(blueDelay);
    digitalWrite(bluePin,LOW);
    delay(blueDelay);
  }


  delay(finalWait);

}
