/**
 * Lesson 54 - Speed of Light Calculations

 Redoing homework from yesterday
 I used cm/microsecond 
 Silly Paul used inches. 

 Wow Paul called me out for just throwing it in excel and not doing math...

 Wow he also called me out for making fun of the imperial system

 This was just a math and physics lesson, not an arduino lesson :(
 */


int trigPin = 12;
int echoPin = 11;
int pingTravelTime;

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
  Serial.println(pingTravelTime);
  delay(25);
}