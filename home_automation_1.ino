#include <SoftwareSerial.h>

int switch1 = 13;
int switch2 = 14;
int switch3 = 15;


void setup()
{ pinMode(switch1,OUTPUT);
pinMode(switch2,OUTPUT);
pinMode(switch3,OUTPUT);
  //Setup usb serial connection to computer
  Serial.begin(9600);
  //int status = 0;
 
}

void loop()
{ 
  int status = 0;
  //Read from bluetooth and write to usb serial
  
  
  if(Serial.available()>0) {
    status = Serial.read();
    switch(status) {
      case 1:
      digitalWrite(switch1,HIGH);
      break;
      case 2:
      digitalWrite(switch1,LOW);
      break;
      case 3:
      digitalWrite(switch2,HIGH);
      break;
      case 4:
      digitalWrite(switch2,LOW);
      break;
      case 5:
      digitalWrite(switch3,HIGH);
      break;
      case 6:
      digitalWrite(switch3,LOW);
      break;
    }
  }
  
}
