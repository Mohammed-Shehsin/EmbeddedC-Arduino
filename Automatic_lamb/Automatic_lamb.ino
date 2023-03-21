void setup() {
  Serial.begin(9600);//Setting the Serial Monitor
  pinMode(A2,INPUT);//Sensor (here LDR)
  pinMode(7,OUTPUT);//LED
}

void loop() {
  Serial.println(analogRead(A2)); //for printing the sensor values in serial Monitor
delay(10);
if(analogRead(A2)<=15){
digitalWrite(7,HIGH);
}else{
digitalWrite(7,LOW);
}

}
