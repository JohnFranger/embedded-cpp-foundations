/**
 * Lesson 20 - Mixing Colours



 */
int redPin = 6;
int grePin = 9;
int bluPin = 10;

String myColour;
String msg = "What colour do you want?";

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(grePin,OUTPUT);
  pinMode(bluPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(msg);
  while(Serial.available() == 0){

  }
  myColour = Serial.readString();

  if(myColour == "red"){
    analogWrite(redPin,255);
    analogWrite(grePin,0);
    analogWrite(bluPin,0);
  } else if(myColour == "green"){
    analogWrite(redPin,0);
    analogWrite(grePin,255);
    analogWrite(bluPin,0);
  } else if(myColour == "blue"){
    analogWrite(redPin,0);
    analogWrite(grePin,0);
    analogWrite(bluPin,255);
  } else if(myColour == "off"){
    analogWrite(redPin,0);
    analogWrite(grePin,0);
    analogWrite(bluPin,0);
  } else if(myColour == "cyan"){
    analogWrite(redPin,0);
    analogWrite(grePin,255);
    analogWrite(bluPin,255);
  } else if(myColour == "yellow"){
    analogWrite(redPin,255);
    analogWrite(grePin,100);
    analogWrite(bluPin,0);
  } else if(myColour == "magenta"){
    analogWrite(redPin,255);
    analogWrite(grePin,0);
    analogWrite(bluPin,100);
  }
}
