#include "MeOrion.h"
#include <SoftwareSerial.h>

MeBluetooth bluetooth(PORT_5);

void setup()
{
  bluetooth.begin(115200);    //The factory default baud rate is 115200
}

void loop() {  
  if (bluetooth.available()){   
    char cmd = readBlueTooth();    
    bluetooth.println(cmd);
  }

}


/*Bluetooth read function*/
char readBlueTooth(){
  char btInput;
  btInput = (char) bluetooth.read();
  return btInput;
}


