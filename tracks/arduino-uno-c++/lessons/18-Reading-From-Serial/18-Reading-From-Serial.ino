/**
 * Lesson 18 — Reading from Serial Monitor

How to take in information from the serialMonitor and use it in the program


 */

float radius;
String msg = "What is the radius of your circle?";
float area;
String msg2 = "Your cricle has an area of ";
float pi = 3.14;

int wT = 250;

void setup() {
  Serial.begin(9600);
  //pinMode(redPin, OUTPUT);
}

void loop() {
  Serial.println(msg);

  while(Serial.available()==0){
  
  }
  radius = Serial.parseFloat();

  area = pi*radius*radius;

  Serial.print(msg2);
  Serial.println(area);

  
  /*
  numBlinks = Serial.parseInt();

  for(int i = 0; i < numBlinks; i++){
    digitalWrite(redPin,HIGH);
    delay(bT);
    digitalWrite(redPin,LOW);
    delay(bT);
  }*/
}
