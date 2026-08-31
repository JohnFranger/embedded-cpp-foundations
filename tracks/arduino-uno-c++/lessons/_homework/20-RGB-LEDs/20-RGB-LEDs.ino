/**
 * Homework 20 — RGB LEDs

Create a user input to choose the colour for an LED. 

 */
// red, green, blue, cyan, magenta, yel0, orange, pink, off

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
  } else if(myColour == "magenta"){
    analogWrite(redPin,255);
    analogWrite(grePin,0);
    analogWrite(bluPin,255);
  } else if(myColour == "yellow"){
    analogWrite(redPin,255);
    analogWrite(grePin,255);
    analogWrite(bluPin,0);
  } else if(myColour == "white"){
    analogWrite(redPin,255);
    analogWrite(grePin,255);
    analogWrite(bluPin,255);
  } else if(myColour == "pink"){
    analogWrite(redPin,235);
    analogWrite(grePin,40);
    analogWrite(bluPin,40);
  } else if(myColour == "orange"){
    analogWrite(redPin,235);
    analogWrite(grePin,30);
    analogWrite(bluPin,0);
  }else{
    analogWrite(redPin,255);
    analogWrite(grePin,0);
    analogWrite(bluPin,0);
    delay(350);
    analogWrite(redPin,0);
    delay(350);
    analogWrite(redPin,255);
    delay(350);
    analogWrite(redPin,0);
    delay(350);
    analogWrite(redPin,255);
    delay(350);
    analogWrite(redPin,0);
  }
}