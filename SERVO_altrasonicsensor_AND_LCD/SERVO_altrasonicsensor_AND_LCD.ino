
#include <LiquidCrystal.h> 
#include <Servo.h> 
 
LiquidCrystal lcd(7,8,9,10, 11, 12); 
int trigPin = 5;
 int echoPin = 3;
long duration; 
int distanceCm; 
 
Servo gateServo;
int pos=0;



void setup() {
lcd.begin(16,2);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Servopin.attach(6);
}



 
void loop() {
  
digitalWrite(trigPin, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW); 
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
 
lcd.setCursor(0,0); 
lcd.print("Distance: ");
lcd.print(distanceCm); 
lcd.print(" cm");
delay(10);
lcd.setCursor(0,1);
delay(10); 
}
 
