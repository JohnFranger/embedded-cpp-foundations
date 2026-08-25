/**
 Lesson 10 - AnalogRead

  Understanding how to read voltages using the arduino and the AnalogRead function.
  Also using console to type out our value. 

 */

int readPin = A3; 
float v2 = 0;
int delayTime = 500;
int readVal;


void setup() {
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {

  //Must calculate since analogRead is 0-1023 we must use a ratio of 5V:1023 

  readVal = analogRead(readPin);
  v2 = (5./1023.)*readVal;
  Serial.println(v2);
  delay(delayTime); 
}
