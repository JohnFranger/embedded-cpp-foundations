/**
 * Homework/Assignment 29 - Push Button Dim LED

 Paul gave the task to dim or brighten and LED using two buttons at the beginning of the video and I completed
 it.

 
 */

//Input Pins

int butLeft = 2;
bool butLeftVal;

int butRight = 4;
bool butRightVal;

//Output Pins

int ledPin = 11;

int ledBrightness = 255;

int dT = 1;


void setup() {
  pinMode(butLeft, INPUT);
  pinMode(butRight,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  butLeftVal = digitalRead(butLeft);
  butRightVal = digitalRead(butRight);

  analogWrite(ledPin, ledBrightness);

  //While the button is pressed
  if(!butLeftVal && ledBrightness < 255){

    ledBrightness += 5;

    Serial.print("Increasing the brightness to");
    Serial.println(ledBrightness);

    delay(dT);
    
  }
  if(!butRightVal && ledBrightness > 0){

    ledBrightness -= 5;

    Serial.print("Decreasing the brightness to");
    Serial.println(ledBrightness);
    

    delay(dT);
  }

}
