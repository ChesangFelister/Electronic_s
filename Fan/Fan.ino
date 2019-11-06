int fan = 7;
int btn = 13;
int val;

void setup() {
 pinMode(fan, OUTPUT);
 pinMode(btn, INPUT);
 Serial.begin(9600);
 }
 
 void loop() {
val = digitalRead(btn);
if ( val == HIGH ) {
 digitalWrite(fan,HIGH);
 Serial.print("on");
 delay(5000);
   } else {
     digitalWrite(fan,LOW);
     Serial.print("off");
     delay(5000);
     }
  }

