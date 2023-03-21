//In this code i have used BlueTooth to turn on and off the LED 
//We can use an Application named "BlueTooth Electronics"
//Here i have set a button where calibre, send 'A' when the button is off
// And sent 'A' when the button is on

#include<SoftwareSerial.h>
char text=" ";

void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);

}

void loop() {
  if (Serial.available()){
    text=Serial.read();
    Serial.println(text);
  }
  if(text='A'){
    digitalWrite(8,LOW);
    delay(1000);
  }
  if(text='a'){
    digitalWrite(8,HIGH);
    delay(1000);
  }
}
