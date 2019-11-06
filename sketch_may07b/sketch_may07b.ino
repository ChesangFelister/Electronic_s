#include <LiquidCrystal.h>
int trigPin= 5;
int echoPin= 3;

LiquidCrystal lcd(7,8,9,10, 11, 12); 

void setup() {
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
}

void loop() {
  int duration, distance;
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); 
  distance = (duration/2)*0.034;
  if (distance >= 200  distance <= 0){
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("Out of Range");
  }
  else {
    lcd.clear();
    lcd.setCursor(2,0); 
    lcd.print(distance);
    lcd.setCursor(5,0);
    lcd.print(" ");
  }
  delay(300);
}

