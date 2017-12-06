//NOT COMPLETE!!!
/*
#include "MeOrion.h"
#include <SoftwareSerial.h>

MeBluetooth bluetooth(PORT_5);
MeTemperature myTemp(PORT_8, SLOT2);

unsigned char table[128] = {0};

void setup()
{
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop()
{ 
  delay(1000);
  
  if(Serial.available())
  {
    bluetooth.write(myTemp.temperature());
  }
}
*/