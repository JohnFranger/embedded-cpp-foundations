/**
 Lesson 28 - Button as Switch

Completing the homework from previous lesson but mcWhorter style.

He did it pretty similar to me but instead of waiting for it to come up like I did when it switches states, he 
looks at only the specific transition from down to up. Same exact logic though! I also used bools because they read better.

Turns out my delay issue that I fixed was due to button bounce
 */

int ledState = 0;

int ledPin = 8;
int butPin = 4;

int buttonNew;
int buttonOld = 1;

int dt = 50;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(butPin,INPUT);
}

void loop() {
  buttonNew = digitalRead(butPin);
  if(buttonOld == 0 && buttonNew == 1){
    if(ledState == 0){
      digitalWrite(ledPin,HIGH);
      ledState = 1;
    } else {
      digitalWrite(ledPin,LOW);
      ledState = 0;
    }
  }
  
  buttonOld = buttonNew;
  delay(dt);
}
