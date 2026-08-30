/**
 * Lesson 19 - Reading Strings From Serial

  How to read strings from the serial monitor.

  I slightly modified Paul's code to make it a bit more fun.

 */


String mySelect;
String msg1 = "Which LED would you like to turn on? ";
String ledMsg[] = {"1. Red!","2. Blue!", "3. Green"};
String errMsg = "Please select a valid option!";

int redPin = 2;
int grePin = 11;
int bluPin = 5;


void setup() {
  Serial.begin(9600);

  pinMode(redPin,OUTPUT);
  pinMode(grePin,OUTPUT);
  pinMode(bluPin,OUTPUT);
}

void loop() {
  Serial.println(msg1);
  for(String colour: ledMsg){
    delay(150);
    Serial.println(colour);
  }
  while(Serial.available() == 0){

  }
  mySelect = Serial.readString();

  if(mySelect == "Red" || mySelect == "red" || mySelect == "1"){
    digitalWrite(redPin,HIGH);
    digitalWrite(bluPin,LOW);
    digitalWrite(grePin,LOW);
  } else if(mySelect == "Blue" || mySelect == "blue" || mySelect == "2"){
    digitalWrite(redPin,LOW);
    digitalWrite(bluPin,HIGH);
    digitalWrite(grePin,LOW);
  } else if(mySelect == "Green" || mySelect == "green" || mySelect == "3"){
    digitalWrite(redPin,LOW);
    digitalWrite(bluPin,LOW);
    digitalWrite(grePin,HIGH);
  } else
  Serial.println(errMsg);

  delay(250);
  
}
