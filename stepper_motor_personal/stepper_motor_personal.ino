#include <Stepper.h>
const int stepsPerRevolution = 60;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);



void setup() {
  Serial.begin(9600);  
  myStepper.setSpeed(60);
//  Serial.print("Set motor speed to  : ");  
//  while(Serial.available()==0); { }    
//  int user_speed= Serial.parseInt();  
//  Serial.println(user_speed);    
 }
void loop() {
  Serial.println("clockwise"); 
  myStepper.step(stepsPerRevolution);
  delay(500);
   Serial.println("anticlockwise"); 
  myStepper.step(-stepsPerRevolution);
  delay(500);


}
