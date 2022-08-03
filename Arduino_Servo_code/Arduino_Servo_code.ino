#include <Servo.h>
const int ledPin = 13; // the pin that the LED is attached to
Servo myServo;
int angle = 0;
int pos;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  Serial.begin(9600);
  myServo.write(0);
  
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(Serial.available()>0){
    String receivedString = "";
    receivedString = Serial.readStringUntil('*');
    
  if (receivedString == "right" || receivedString == "يمين" || receivedString == "Right") {
      myServo.write(180);
      digitalWrite(ledPin, HIGH);
    
    }
    
    else if (receivedString == "left" || receivedString == "Left" || receivedString == "يسار") {
     myServo.write(0);
     digitalWrite(ledPin, LOW); 
   
    }
    
   }
   
   delay(1000);
}
