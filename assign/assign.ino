#include<Servo.h>
 Servo servopin;
 int pinpot=A0;
  int Readvalue;
 
 

void setup() {
  servopin.attach(6);
  pinMode(pinpot,INPUT);

  
 
}
  void loop() {

  Readvalue=analogRead(pinpot);
  Readvalue=map(Readvalue,0,1023,0,180);
   servopin.write(Readvalue);
   delay(10);
   
 
  
  // put your main code here, to run repeatedly:

}      

 
