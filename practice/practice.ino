#include<Servo.h>
Servo servopin;
int pot;
int ReadValue;
int angle;




void setup() {
  servopin.attach(10);
  pinMode(pot,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  ReadValue=analogRead(pot);
  angle=map(ReadValue,1023,0,180,0);
  servopin.write(angle);
  delay(1000);
  
  // put your main code here, to run repeatedly:

}
