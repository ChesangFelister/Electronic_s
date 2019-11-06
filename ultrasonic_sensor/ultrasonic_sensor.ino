  #include <LiquidCrystal.h>          //Including the LiquidCrystal Library
    LiquidCrystal lcd(12,11,10,9,8,7); 
    const int triggerpin = 2;     //Connect the trigger pin at pin 2
    const int echopin = 3;        //Connect the echo pin at pin 3
    long time;                    //Variable for storing the time traveled
    int S;                        //Variable for storing the distance covered
    int inch;                     //Variable for storing the distance in inches
    void setup() {
    lcd.begin(16,2);              //Initializing the interface of the LCD
    pinMode(triggerpin, OUTPUT);  //Setting the triggerpin as output pin
    pinMode(echopin, INPUT);      //Setting the echo pin as input pin
    Serial.begin(9600);       
    }
    void loop() {
    lcd.clear();
    digitalWrite(triggerpin, LOW);  
    delayMicroseconds(2);
    digitalWrite(triggerpin, HIGH); //Setting the triggerpin high for 10us to generate a wave
    delayMicroseconds(10);
    digitalWrite(triggerpin, LOW);
    time = pulseIn(echopin, HIGH); //Setting the echopin high to receive the wave
    S= time*0.034/2;                //Calculating the distance traveled in cm
    inch = time*0.0133/2;           //Calculating the disatnce traveled in inches
    lcd.setCursor(0,0);             // Sets the location at start
    lcd.print("Distance: "); 
    lcd.print(S); 
    lcd.print(" cm");
    delay(10);
    lcd.setCursor(0,1);
    lcd.print("Distance: ");
    lcd.print(inch);
    lcd.print(" inch");
    delay(1000);
    }
    
