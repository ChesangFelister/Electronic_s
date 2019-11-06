#include "functions.h"
void Red(){
  digitalWrite(redpin,HIGH);
  delay(1000);
  digitalWrite(redpin,LOW);
  delay(1000);
  
}
void Blue(){
  digitalWrite(bluepin,HIGH);
  delay(1000);
  digitalWrite(bluepin,LOW);
  delay(1000);
  
}
void Green(){
  digitalWrite(greenpin,HIGH);
  delay(1000);
  digitalWrite(greenpin,LOW);
  delay(1000);
  
}
void servos(){
 for(angle = 0; angle < 180; angle += 1)     
  {                                  
   servo_test.write(angle);
    delay(15);                       
  } 
 
  delay(1000);
  
  for(angle = 180; angle>=1; angle-=5)     
  {                                
    servo_test.write(angle);
    delay(5);                       
  } 

    delay(1000);
}
void servo(){
  
}

