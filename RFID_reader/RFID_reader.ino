#include <SPI.h>
#include <MFRC522.h>
#include<Stepper.h>
 
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
const float STEPS_PER_REV=32;
const float GEAR_RED=64;
const float STEPS_PER_OUT_REV=STEPS_PER_REV*GEAR_RED;
int StepsRequired;
int numblink;

void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  Serial.println("Approximate your card to the reader...");
  Serial.println();
  Serial.begin(9600);
  Serial.print("how many time do you want it to blink");
  while(Serial.available()==0){}
  numblink=Serial.parseInt();

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  void stp(){
  steppermotor.setSpeed(600);
  StepsRequired=numblink;
  steppermotor.step(StepsRequired);
  delay(2000);
  
  StepsRequired=numblink;
  steppermotor.setSpeed(100);
  steppermotor.step(StepsRequired);
  delay(1000);
  
  StepsRequired=-numblink;
  steppermotor.setSpeed(700);
  steppermotor.step(StepsRequired);
  delay(2000);
}
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "BD 31 15 2B") //change here the UID of the card/cards that you want to give access
  {
    Serial.println("Authorized access");
    Serial.println();
    delay(3000);
  }
 
 else   {
    Serial.println(" Access denied");
    delay(3000);
  }
} 
