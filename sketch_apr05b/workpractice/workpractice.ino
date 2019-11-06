  int potpin=A0;
  int redled=10;
  int Readvalue;
  float Writevalue;
  float voltage;
  

void setup() {
  Serial.begin(9600);
  pinMode(potpin,INPUT);
  pinMode(redled,OUTPUT);
  // put your setup code here, to run once:

}

void loop() 
{ 
 Readvalue= analogRead(potpin);            // reads  potentiometer (value between 0 and 1023) 
 Readvalue = map(Readvalue, 0, 1023, 300, 5);     // scale i(value between 0 and 180) 
 digitalWrite(redled, HIGH);
 delay(Readvalue);                           
 digitalWrite(redled, LOW);
 delay(Readvalue);

  // put your main code here, to run repeatedly:

}
