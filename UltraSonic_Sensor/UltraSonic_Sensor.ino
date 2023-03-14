int trgpin=7;     //the pin where the terminal of TRIG is connected
int echopin=11;   // the pin where the teminal of the ECHO is connected
long dir,cm,in;



void setup() {
  pinMode(trgpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}

void loop() {
 digitalWrite(trgpin,LOW);
 delayMicroseconds(5);
 digitalWrite(trgpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trgpin,LOW);   //SEnding the ultra sonic wave

dir=PulseIn(echopin,HIGH);
cm=(dir/2)*0.0343; //For finding the distance of the object in Centimetres you should have the calculate the received valve by 2 and multipird by 0.0343 or divided by 29.1
in=(dir/2)*0.0135;//For finding the distance of the object in Inches you should have the calculate the received valve by 2 and multipird by 0.0135 or divided by 75


Serial.print("The object is : Iches ");
Serial.println(in);
Serial.print("               Centimetre ");
Serial.println(cm);
Serial.println();
delay(500);
}
