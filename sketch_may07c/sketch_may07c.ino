# include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
int pir=6;
int motion;


void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(pir,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  motion=digitalRead(pir);
  if(motion==HIGH){
  lcd.setCursor(0,0);
  lcd.print("motion= ");
  lcd.print(analogRead(motion));
  }

}
