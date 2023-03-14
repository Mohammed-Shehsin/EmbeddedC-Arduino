void setup() {
  pinMode(7,OUTPUT);   //GREEN
  pinMode(8,OUTPUT);   //RED
  pinMode(11,OUTPUT);  //YELLOW
 
}

void loop() {
  digitalWRite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(11,LOW);   
  delay(5000);          //GREEN LIGHT (5min)
  digitalWRite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(11,LOW);   
  delay(5000);          //RED LIGHT (5min)
  digitalWRite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(11,HIGH);   
  delay(2000);          //YELLOW LIGHT (2min)
}
