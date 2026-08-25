/*

Homework 10 — Using AnalogRead to confirm calculations (in README) regarding voltage and Ohm's Law. 

Write the calculations to the console. 

I will be using a 1000Ω resistor and a 10Ω resistor. 
*/

int readPin = A3;
float v2;
int delayTime = 500;
int analogVal;


void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  //Can confirm it reads the desired 0.05V and 4.95V if they are switched. 
  analogVal = analogRead(readPin);
  v2 = (5./1023.)*analogVal;
  Serial.println(v2);
  delay(delayTime);
}
