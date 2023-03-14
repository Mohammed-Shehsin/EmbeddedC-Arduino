#include<IRboarddefs.h>
#include<IRremote.h>
#include<IRremoteInt.h>
#include<ir_Lego_PF_BitStreamEncodes.h>
int RECV_PIN =6; //Pin which the Reciever terminal is connected
IRrecv irrecv(RECV_PIN);
decode.results results;


void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  }

void loop() {

//Code for finding the value recieved from the IR remote

 if(irrecv.decode(&results)){
   Serial.println(results.value,HEX);      
   irrecv.resume();
 }
 delay(1000);


//  Converted Remote value**:
//  POWER   - 33441975
//  MODE    - 33446055
//  MUTE    - 33454215
//  ** it cannot be same for every remotes find the value and change them .


//Code for programming the project asper the recieved siginal
if(result.value=="33441975"){       //Here in the place of "33441975" you can use other values for your desirable outcome
  Serial.println("Power button is pressed ..!");    
}
delay(1000);
}
