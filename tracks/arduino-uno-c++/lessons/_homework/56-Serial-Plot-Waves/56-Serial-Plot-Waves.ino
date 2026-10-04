/**
 * Homework 56 - Serial Plot Waves
 
 Plot a sine wave and cosine wave 
 */

float angleRad;
float conversionFactor = (PI / 180);

float sineValue;
float cosineValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int angleDeg = 0; angleDeg < 360; angleDeg++){
    angleRad = angleDeg * conversionFactor;
    sineValue = sin(angleRad);
    cosineValue = cos(angleRad);

    Serial.print(-1.1);
    Serial.print(",");
    Serial.print(1.1);
    Serial.print(",");
    Serial.print(sineValue);
    Serial.print(",");
    Serial.println(cosineValue);
    delay(10);
  }
}
