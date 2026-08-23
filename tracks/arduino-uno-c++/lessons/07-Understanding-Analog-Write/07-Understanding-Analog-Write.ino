/**

Lesson 07-Understanding-Analog-Write
 
Learning to use analog write instead of digital write. 
Analog allows values between on and off. 
Only PWM Pins work.
 */


int ledPin = 11;

int bright = 100;


void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  //AnalogWrite takes two values, the pin, and the value. The values is between 0 -> 0V and 255 -> 5V. 
  //255 because thats the most we can write with 8 binary "bits". The information stored in one byte. *Scales linearly.
  analogWrite(ledPin,bright);
}
