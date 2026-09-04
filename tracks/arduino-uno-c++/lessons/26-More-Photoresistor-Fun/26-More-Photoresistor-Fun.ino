/**
 * Lesson 26 - More Photoresistor Fun

  Paul assigned an assignment to make essentially the same project with the potentiometer from lesson 24 but with a photoresistor instead

 */

int buzzPin = 9;
//Between 100microseconds and 10000 microseconds
float delayTime;

int photoPin = A3;
//Between 0 and 1023 technically but more like between 50 and 780 ish
int photoVal;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(photoPin, INPUT);
  Serial.begin(9600);
}

void loop() {

  photoVal = analogRead(photoPin);
  Serial.println(photoVal);

  delayTime = (9900./700.)*photoVal + 100.;


  //The actual writing to the buzzer
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(delayTime);
}
