int Red = 9;
#include <Ultrasonic.h>

Ultrasonic ultrasonic(12,11);

void setup() {
Serial.begin(9600);
pinMode(Red,OUTPUT);
}

void loop()
{
int distance = ultrasonic.Ranging(CM);
if (distance<50){
int dil = 2*distance;

digitalWrite(Red,HIGH);
delay(dil);
digitalWrite(Red,LOW);
delay(dil);
}
}
