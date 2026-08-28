/**
 * Lesson 16 - Fun For Loops

  Looking deeper into the specific parameters for a for loop.

 */

int j;
int wT = 500;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(j = 1; j <= 10; j += 1){
    
    Serial.println(j);
    delay(wT);
    
  }
  Serial.println();
}
