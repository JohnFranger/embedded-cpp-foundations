/**
 * Lesson 51 - DHT11 LCD Display
 */

#include <LiquidCrystal.h>
#include <DHT.h>
#define Type DHT11

int sensePin = 2;
float tempC;
float tempF;
float humidity;

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

DHT HT(sensePin, Type);
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int setTime = 500;

void setup() {
  Serial.begin(9600);
  HT.begin();
  delay(setTime);
  lcd.begin(16,2);
}

void loop() {
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);

  lcd.setCursor(0, 0);
  lcd.print("Temp F= ");
  lcd.print(tempF);
  lcd.setCursor(0, 1);
  lcd.print("Humidity= ");
  lcd.print(humidity);
  lcd.print("%");
  delay(500);
  lcd.clear();
}
