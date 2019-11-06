#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  

void setup()
{
  lcd.init();                      
  lcd.init();
  
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("The tempreture is!");
  lcd.setCursor(2,1);
  lcd.print("30c");
   lcd.setCursor(0,2);
  
}


void loop()
{
}
