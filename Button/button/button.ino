void setup() {
  pinMode(11,INPUT); //Pin which button is connected
  pinMode(7,OUTPUT); //pin which the the LED is connected


}

void loop() {
  if(digitalRead(11)==HIGH){ //Condition whether the button is on/off
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(7,LOW);
  }

}
