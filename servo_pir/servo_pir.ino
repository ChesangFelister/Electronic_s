#include<Servo.h>

Servo servopin;
int PIR=6;
int Readvalue;

void setup() {
  servopin.attach(9);
  pinMode(PIR,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  Readvalue=digitalRead(PIR);
  if(Readvalue==HIGH){
    
  servopin.write(50);
  delay(1000);}
  
  else{servopin.write(0);lcd.setCursor(0,0);
  lcd.print("20c");
  delay(5000);
  lcd.setCursor(0,1);
  lcd.print("low humidity");
  delay(1000);


  delay(10);
  }

}
