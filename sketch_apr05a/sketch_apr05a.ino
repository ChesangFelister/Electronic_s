
int potpin = 0;  
int ledpin = 13;
int val;    

void setup() 
{ 
pinMode(ledpin, OUTPUT); 
} 

void loop() 
{ 
 val = analogRead(potpin);           
 val = map(val, 0, 1023, 500, 5);     
 digitalWrite(ledpin, HIGH);
 delay(val);                           
 digitalWrite(ledpin, LOW);
 delay(val);}
 
