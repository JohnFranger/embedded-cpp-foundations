/**
 * Lesson 57 - Multiple Serial Plotter Channels
 */

float sinVal;
float cosVal;
float parab;
float parab2;
float j;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(j = -4; j <= 4; j = j+.01){
    parab = sq(j);
    sinVal = sin(j);
    parab2 = parab*sinVal;
    Serial.print(parab);
    Serial.print(",");
    Serial.print(parab2);
    Serial.print(",");
    Serial.print(-16);
    Serial.print(",");
    Serial.println(16);
  }
}
