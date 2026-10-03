/**
 * Lesson 55 - Measuring Distance

Homework from yesterday

Paul uses inches though so I'll use it for this lesson but homeworks I wont
 */


int trigPin = 12;
int echoPin = 11;
int pingTravelTime;
float pingTravelDistance;
float distToTarget;

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
  delay(25);
  pingTravelDistance = (pingTravelTime*765.*5280.*12.)/(3600.*1000000.);
  distToTarget = pingTravelDistance/2;
  Serial.print(distToTarget);
  Serial.println(" inches");
  delay(500);
  }