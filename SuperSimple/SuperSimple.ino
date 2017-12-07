#include "MeOrion.h"
#include <SoftwareSerial.h>

MeBluetooth bluetooth(PORT_5);

void setup()
{
  bluetooth.begin(9600);
}

void loop()
{ 
  delay(1000);
  
  bluetooth.write('1');
}
