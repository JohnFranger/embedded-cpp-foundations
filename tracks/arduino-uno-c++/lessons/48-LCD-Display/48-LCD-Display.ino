/**
 * Lesson 48 - LCD Display


 */

 #include <LiquidCrystal.h>

int rs = 7;
int en = 6;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int dt = 1000;

void setup() {
  //16 columns, 2 rows
  lcd.begin(16,2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Watch me Count");
  for (int i = 1; i <= 10; i++){
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(dt/2);
  }
  lcd.clear();
}
