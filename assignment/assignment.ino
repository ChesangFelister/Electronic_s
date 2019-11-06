int pinpot=A0;
int Redled=10;
int Readvalue;
float Writevalue;
float voltage;

void setup() { Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(Redled,OUTPUT);

  
  
  // put your setup code here, to run once:

}

void loop() {
   Readvalue=analogRead(pinpot);  //read potentiometer .
  Writevalue=(255./1023.)*Readvalue;   //mapped value
  voltage=(5./1023.)*Readvalue;    // scale
  analogWrite(Redled,Writevalue);    // write led at a varying brightness.
  Serial.print("tpinvalue ");  // read from specified led.
  Serial.print(Readvalue);
  Serial.print(" ");
  Serial.print("mapped values");
  Serial.print(" ");
  Serial.print(Writevalue);
  Serial.print("");
  Serial.print("Write value");
  Serial.print("");
  Serial.println(voltage);
  analogWrite(Redled,HIGH);  //on 
  delay(Readvalue);// determine the value 
  analogWrite(Redled,LOW);  // off
  delay(Readvalue);
  
 // put your main code here, to run repeatedly:

}
