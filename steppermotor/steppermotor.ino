#include<Stepper.h>
const float STEPS_PER_REV=32;
const float GEAR_RED=64;
const float STEPS_PER_OUT_REV=STEPS_PER_REV*GEAR_RED;
int StepsRequired;
int numblink;

Stepper steppermotor(STEPS_PER_REV,8,10,9,11);
void setup() {
  Serial.begin(9600);
  Serial.print("how many time do you want it to blink");
  while(Serial.available()==0){}
  numblink=Serial.parseInt();
}

void loop() {

stp();
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


