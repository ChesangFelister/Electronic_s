
int role=7;       
int lm35=A0;

void setup() {

  Serial.begin(9600);   
  analogReference(INTERNAL);  
  pinMode(role,OUTPUT);       

}

void loop() {
  int okunanDeger = analogRead(A0);          
  float derece = okunanDeger / 9.31;         
  Serial.println(derece);                  
  delay(1000);                               

  if(derece >25)
    digitalWrite(role,HIGH);                 
    else
    digitalWrite(role,LOW);                  
  
 
}
