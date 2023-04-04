#include<SoftwareSerial.h>
SoftwareSerial My(9.10);

void sentMessage(){
mySerial.println("AT+CMGF=1");
delay(1000);
mySerial.println("AT+CMGS=\'+919999999999\'\r"); \\Provide the number to which the message have to sent
delay(1000);

void recieveMessage(){
  mySerial.println("AT+CNMI=2,2,0,0,0");
delay(1000);}

}

void setup() {
 My.begin(9600);
Serial.begin(9600);
delay(1000);
}

void loop() {
  if(Serial.available()>0){
    switch(Serial.read()){
      case 's': sentMessage(); break;
      case 'r': recieveMessage(); break;
    }
  }
    if (Serial.available()>0)      
{
My.write(Myserial.read(1));
}    
  }


