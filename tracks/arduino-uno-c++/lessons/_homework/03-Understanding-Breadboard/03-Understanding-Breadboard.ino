/**
 * Homework 33 — Joystick-Controlled Servo
 *
 * The goal of this homework was to look at setting up multiple pins to multiple lights.
 * Subsequently you must make each light blink a certain number of times and in a specific order.
 * By using loops I was able to make each blink the specfic number of times and using a flag
 * I was able to only have it iterate once.
  */

int redPin = 13; //BLink 5
int yellowPin = 6; //Blink 10
int bluePin = 11; //Blink 15

//Will only allow it to run once
bool flashingStart = true;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

//Will run once then the loops will cause each led to blink the required amount of times. 
void loop() {
  if(flashingStart){
    for(int i = 0 ; i < 5 ; i++){
      digitalWrite(redPin,HIGH);
      delay(200);
      digitalWrite(redPin,LOW);
      delay(200);
    }
    for(int i = 0 ; i < 10 ; i++){
      digitalWrite(yellowPin,HIGH);
      delay(200);
      digitalWrite(yellowPin,LOW);
      delay(200);
    }
    for(int i = 0 ; i < 15 ; i++){
      digitalWrite(bluePin,HIGH);
      delay(200);
      digitalWrite(bluePin,LOW);
      delay(200);
    }
    flashingStart = false;
  }
}
