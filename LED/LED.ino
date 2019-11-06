int Redled=10;

void setup() {
  pinMode(Redled,OUTPUT);
  
  
  // put your setup code here, to run once:

}

void loop() {
 analogWrite(Redled,102);
 delay(1000);
 
 analogWrite(Redled,0);
 delay(1000);
  // put your main code here, to run repeatedly:

}
