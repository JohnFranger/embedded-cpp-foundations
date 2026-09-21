/**
 * Homework 42 - Serial to Parallel Shift Register

Create a binary counter was the assignment but I spiced it up a bit to make it more fun.
 */

 
int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte LEDs = 0x00;

byte Values[] = {1,2,4,8,16,32,64,128};

int dt;

int selection = 0;

void setup() {
  Serial.begin(9600); 
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  while (selection == 0){
    Serial.println("Select 1. Binary Counter or 2. Zoom Thing");
    while(Serial.available() == 0){

    }
    selection = Serial.parseInt();
    if(selection != 1 && selection != 2){
      selection = 0;
    }

  }

  if(selection == 1){
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
    digitalWrite(latchPin, HIGH);

    dt = 400;
    LEDs++;
    delay(dt);
  }

  if(selection == 2){
    
    dt = 50;
    for(int i = 0; i < 8; i++){
      LEDs = Values[i];
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
      digitalWrite(latchPin, HIGH);
      delay(dt);
    }
    for(int i = 7; i > -1; i--){
      LEDs = Values[i];
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
      digitalWrite(latchPin, HIGH);
      delay(dt);
    }
  }

}
