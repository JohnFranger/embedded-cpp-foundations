/**
 * Lesson 24 - Passive Buzzers
 
Allows more control over tone vs the active buzzer

The homework was provided during the lesson and he went over it. 

 */

//10 millis is about as low as it goes
int buzzPin = 9;

int potentiPin = A2;
int potVal;

float delayTime;

//All the way left is 10k microseconds all the way right is 60 microsecond delay.

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(potentiPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  /*
  How to convert 0 -> 60micros and 1023 -> 10k micros
  First we can divide by 1023 to get it in normal units
  Next we can multiply by out max value. 
  But wait then 0 would be still 0. 
  If we want 0 to be 60 we can multiply by some conversion factor and add 60.
  Therefore if we want the maximum to be exactly 10k but we're adding 60.
  We must multiply by 9940/1023 then add 60.
  Test with 0. 0 * (9940/1023) = 0. 0 + 60 = 60. Perfect
  Test with 1023. 1023*(9940/1023) = 9940. 9940 + 60 = 10000. Also works
  For any value x such that x is an element of [0, 1023].
  The corresponding delay time is represented by f(x) = (9940/1023) * x + 60.
  This is linear and therefore will gradually change as the potentiometer spins. 
  */

  potVal = analogRead(potentiPin);
  delayTime = (9940./1023.) * potVal + 60;

  //Testing values just in case. Mr. McWhorter did not do this
  /*
  Serial.print("PotVal: ");
  Serial.println(potVal);
  Serial.print("DelayTime: ");
  Serial.println(delayTime); */

  //The actual writing to the buzzer
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(delayTime);
  

}
