int redpin=11;
int greenpin=10;
int bluepin =6;
int brightness=255;
String colorChoice;

void setup() {
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
    
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("What color would you like the LED?(red ,green,blue,yellow,purple,orange)");
  while (Serial.available()==0){}
  colorChoice =Serial.readString();
  if (colorChoice=="red"){
  analogWrite(redpin,brightness);
  analogWrite(greenpin,0);
  analogWrite(bluepin,0);
}
  if (colorChoice=="green"){
  analogWrite(greenpin,brightness);
  analogWrite(redpin,0);
  analogWrite(bluepin,0);
}
  if (colorChoice=="blue"){
  analogWrite(greenpin,0);
  analogWrite(redpin,0);
  analogWrite(bluepin,brightness);
}
  if (colorChoice=="orange"){
  analogWrite(greenpin,brightness);
  analogWrite(redpin,brightness);
  analogWrite(bluepin,0);
}
if (colorChoice=="purple"){
  analogWrite(greenpin,0);
  analogWrite(redpin,brightness);
  analogWrite(bluepin,brightness);
}
if (colorChoice=="yellow"){
  analogWrite(greenpin,brightness);
  analogWrite(redpin,0);
  analogWrite(bluepin,brightness);
}
if (colorChoice!="red"&&colorChoice!="green"&&colorChoice!="blue"&&colorChoice!="orange"&&colorChoice!="purple"&&colorChoice!="yellow"){
  Serial.println("That is not a valid colorChoice ,please try again");
  Serial.println("");
}
  // put your main code here, to run repeatedly:

}
