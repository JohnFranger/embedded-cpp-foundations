/**
 * Homework 54 - Ultrasonic Sensor -> Distance
 */


int trigPin = 12;
int echoPin = 11;
int pingTravelTime;
float pingTimeSec;
float metDist;
float cmDist;

int speedOfSound = 342;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pingTravelTime = pulseIn(echoPin, HIGH);
  //Serial.println(pingTravelTime);
  

  // We got a speed of sound of 342m/s 
  // When we multiply by our mills/2 we get the distance to the object.
  // If we multiplied by millis we'd get total distance. 
  // We want usable units so like cms
  // We can convert millis to seconds, then divide result by 100 to get cms



  //Convering millis
  pingTimeSec = (pingTravelTime/2) / 1000000.;

  //Getting distance in meters
  metDist = speedOfSound * pingTimeSec;

  //Converting to cms
  cmDist = metDist * 100.;

  Serial.print(cmDist);
  Serial.println("cm");

  delay(25);

}