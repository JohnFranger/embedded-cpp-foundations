/**
 * Homework 60 - Reduce Noise
 */
 #include <LiquidCrystal.h>

int rs = 7;
int en = 6;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int trigPin = 12;
int echoPin = 11;
int pingTravelTime;
float pingTimeSec;
float metDist;
const int iters = 50;
float cmDist[iters];
float sumDist = 0;
float avgDist = 0;



int speedOfSound = 342;

int buttonPin = 9;
int butState = 1;
int butPrev;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() {
  butState = digitalRead(buttonPin);

  Serial.print("ButState: ");
  Serial.print(butState);
  Serial.print(", ButPrev: ");
  Serial.print(butPrev);
  Serial.print(", curDist: ");
  Serial.println(avgDist);

  if(butState == 1 && butPrev == 0){
    Serial.println("Button Pressed");
    sumDist = 0;
    for(int i = 0; i < iters; i++){
      Serial.println("button pressed");
      lcd.clear();
      digitalWrite(trigPin,LOW);
      delayMicroseconds(10);
      digitalWrite(trigPin,HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin,LOW);
      pingTravelTime = pulseIn(echoPin, HIGH);

      //Convering millis
      pingTimeSec = (pingTravelTime/2) / 1000000.;

      //Getting distance in meters
      metDist = speedOfSound * pingTimeSec;

      cmDist[i] = metDist * 100.;

      
    }
    for(float dist: cmDist){
        sumDist += dist;
      }
    
    avgDist = sumDist / iters;
    
    

    lcd.setCursor(0,0);
    lcd.print("Current Distance");
    lcd.setCursor(0,1);
    lcd.print(avgDist);
    lcd.print("cm");
  }
  butPrev = butState;
}
