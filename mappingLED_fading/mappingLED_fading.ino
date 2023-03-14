int a,b,c=0;

void setup() {
  pinMode(A1,INPUT); 
  pinMode(7,OUTPUT);
  pinMOde(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 a=analogRead(A1);
 b=may(a,0,1023,0,255);  //mapping the resulted value from the sensor in the range 0-1023
 analogWrite(7,b);
 c=map(a,0,1023,255,0);
 analogWrite(11,c);
 Serial.println(b= );
 Serial.println(b);
 Serial.println(c= );
 Serial.println(c);
 delay(150);

}
