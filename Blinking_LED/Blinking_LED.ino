void setup() {
 pinMode(7,OUTPUT); //the pin where your LED,s +ve terminal is connected to the borard
}

void loop() {
digitalWrite(7,HIGH); //LED turned ON
delay(1000);          //Last 1 sec
digitalWrite(7,LOW);  //LED turned OFF
delay(1000);          //Last 1 sec and continue the loop.......

}
