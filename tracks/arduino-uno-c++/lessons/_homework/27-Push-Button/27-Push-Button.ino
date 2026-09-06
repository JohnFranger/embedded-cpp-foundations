/**
 * Homework 27 - Push Buttons as a Switch
 
  How to use a push button to switch between states and stay in that state.

 */

  int ledPin = 8;
  int butPin = 4;
  bool curState;
  bool prevState = 1;

  bool ledState = false;

  int dT = 10;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(butPin, INPUT);
}

void loop() {
  curState = digitalRead(butPin);
  //When a change of states occurs
  if(prevState != curState){
    //While the button has not resturned to its first state, the up position it will wait
    Serial.println("Pressed!");
    while(!curState){
      curState = digitalRead(butPin);
    }
    Serial.println("Unpressed!");
    //If the light is off, turn it on
    if(!ledState){
      digitalWrite(ledPin,HIGH);
      ledState = true;
      Serial.println("Turning On!");
    } else if(ledState){
      digitalWrite(ledPin,LOW);
      ledState = false;
      Serial.println("Turning Off!");
    }
  }

  prevState = curState;
  delay(dT);
}

