#include<servo.h>
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

  void servo(){
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
