int a=0;
int b=0;
int motor=10;
void setup() {
  pinMode(A2,INPUT);  //Moister Sensor
  pinMode(A1,INPUT);  //LDR
  pinMode(7,OUTPUT);  //Indicator BLUE
  pinMode(8,OUTPUT);  //Indicator GREEN
  pinMode(11,OUTPUT); //Indicator RED
  pinMode(6,OUTPUT); //Moistor Indicator GREEN
  pinMode(2,OUTPUT); //Moistor Indicator RED
  pinMode(motor,OUTPUT);
  Serial.begin(9600);

}

void loop() {
 // Serial.println(analogRead(A1));
 // delay(1000);
  if((analogRead(A2)<400) && (analogRead(A2)>300) ){
    digitalWrite(6,HIGH);
    digitalWrite(2,LOW);
    delay(1000);
    digitalWrite(motor,LOW); delay(100);
  }else if(analogRead(A2)<300){
   digitalWrite(6,LOW);
   digitalWrite(2,HIGH);
   delay(1000);
   digitalWrite(motor,HIGH); delay(100);
  }else{
    digitalWrite(6,LOW);
   digitalWrite(2,HIGH);
   delay(1000);
  }

  a=analogRead(A2);
  b=map(a,300,1026,100,0);
  Serial.println(b);
  delay(1000);

  if(analogRead(A1)<=50){
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(11,LOW);
    delay(10);
  }
  if((analogRead(A1)>50)  && (analogRead(A1)<=200)){
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(11,LOW);
    delay(10);
  }
  if((analogRead(A1)>200) && (analogRead(A1)<=400)){
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(11,HIGH);
    delay(10);
  }
}
