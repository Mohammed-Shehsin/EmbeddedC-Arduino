int a,b=0;
int c=a+b;

void setup() {
pinMode(4,OUTPUT);        //Light representing the 1st Candidate 
pinMode(7,OUTPUT);        //Light representing the 2nd Candidate
pinMode(11,INPUT);        // Button/switch of the 1st candidate
pinMode(9,INPUT);         // Button/switch of the 2nd candidate
Serial.begin(9600);

}

void loop() {
  if(digitalRead(11)==HIGH){
    a=a+1;
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(4,LOW);
  }elseif(digitalRead(9)==HIGH){
    b=b+1;
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
}else{
    digitalWrite(4,LOW);
    digitalWrite(4,LOW);
}
Serial.print("Vote for A= ");    //Vote counted for the 1st Candidate 
Serial.println(a);
Serial.print("Vote for B= ");    //Vote counted for the 2nd Candidate 
Serial.println(b);
Serial.print("Total Vote done = ");  //Vote counted in Total
Serial.println(c); delay(1000);
serial.println("-------------------------------------------"); delay(1000);
}
