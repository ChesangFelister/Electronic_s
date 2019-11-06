void setup() {
  // put your setup code here, to run once:

}

void loop() {
  void loop() 
{ 
 val = analogRead(potpin);            // reads potentiometer (value between 0 and 1023) 
 val = map(val, 0, 1023, 500, 5);     // scale it  (value between 0 and 180) 
 digitalWrite(ledpin, HIGH);
 delay(val);                           // waits for the servo to get there 
 digitalWrite(ledpin, LOW);
 delay(val);
}
  // put your main code here, to run repeatedly:

}
