int motorA1=8;
int motorA2=7;
int motorB1=9;
int motorB2=10;
int sensor1=2;
int sensor2=3;
void setup() {
  pinMode(motorA1,OUTPUT);
  pinMode(motorA2,OUTPUT);
  pinMode(motorB1,OUTPUT);
  pinMode(motorB2,OUTPUT);
  pinMode(sensor1,INPUT);
  pinMode(sensor2,INPUT);



}

void loop() {
  if(digitalRead(sensor1)==0 && digitalRead(sensor2)==0){  //for moving Forward
    digitalWrite(motorA1,1);
    digitalWrite(motorA2,0);
    digitalWrite(motorB1,0);
    digitalWrite(motorB2,1);
    delay(50);
  }
  if(digitalRead(sensor1)==1 && digitalRead(sensor2)==0){
    digitalWrite(motorA1,1);
    digitalWrite(motorA2,0);
    digitalWrite(motorB1,0);
    digitalWrite(motorB2,0);
    delay(50);
  }
  if(digitalRead(sensor1)==0 && digitalRead(sensor2)==1){
    digitalWrite(motorA1,0);
    digitalWrite(motorA2,0);
    digitalWrite(motorB1,0);
    digitalWrite(motorB2,1);
    delay(50);
  }
  if(digitalRead(sensor1)==1 && digitalRead(sensor2)==1){      //for stop {in the line we will draw a T-line at the end where both the sensor detect }
    digitalWrite(motorA1,0);
    digitalWrite(motorA2,0);
    digitalWrite(motorB1,0);
    digitalWrite(motorB2,0);
    delay(50);
  }


}
