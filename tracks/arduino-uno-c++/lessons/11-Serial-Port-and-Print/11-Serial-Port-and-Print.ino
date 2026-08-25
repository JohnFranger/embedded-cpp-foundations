/**
 * Lesson 11 — Serial Port and Print Commands
 Using Serial Monitor to display messages like strings, variables, and artihmatic. 
 
 */

 int j = 1;
 int delayTime = 750;
 int x = 12;
 int y = 11;
 int z;

 float pi = 3.14;
 float r = 2;
 float area;

 String myString = "j = ";

void setup() {
  Serial.begin(115200);
}

void loop() {
  //z = x + y;
  //Serial.print(x);
  //Serial.print(" + ");
  //Serial.print(y);
  //Serial.print(" = ");
  //Serial.println(z);

  area = pi*pow(r,2);
  Serial.print("A circle with radius ");
  Serial.print(r);
  Serial.print(" has an area of ");
  Serial.print(area);
  Serial.println("!");

  delay(delayTime);

  r+=0.5;
}
