#include "MeOrion.h"
#include <SoftwareSerial.h>

MeBluetooth bluetooth(PORT_5);
int state = 0;

void setup() {
  Serial.begin(38400); // Default communication rate of the Bluetooth module
  bluetooth.begin(38400);    //The factory default baud rate is 115200
}

void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 }

  if(bluetooth.available()){ 
    state = bluetooth.read(); 
 }

 if (state == '0') {
  Serial.println("LED: OFF"); 
  state = 0;
 }
 else if (state == '1') {
  Serial.println("LED: ON");
  state = 0;
 } 
}
