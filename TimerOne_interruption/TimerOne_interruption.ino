#include<TimerOne.h>
String LEDStatus="OFF";
int YellowLed=10;
int RedLed=9;


void setup() {
  pinMode(YellowLed,OUTPUT);
  pinMode(RedLed,OUTPUT);

  Timer1.initialize(100000);
  Timer1.attachInterrupt(BlinkYellow);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(RedLed, HIGH);
delay(1000);
digitalWrite(RedLed, LOW);
delay(1000);
  // put your main code here, to run repeatedly:

}
void BlinkYellow()
{
if (LEDStatus=="ON"){
  digitalWrite(YellowLed,LOW);
  LEDStatus="OFF";
  return;
  }
if (LEDStatus=="OFF"){
  digitalWrite(YellowLed,HIGH);
  LEDStatus="ON";
  return;
}
}
