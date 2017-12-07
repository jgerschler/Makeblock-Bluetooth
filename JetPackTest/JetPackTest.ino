#include <NewPing.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() 
{
  Serial.begin(9600); 
}

void loop() 
{
 int distance = sensorRead();
 if(distance < 25 && distance != 0)
 {
  Serial.println('1');
  delay(100);
  while(distance < 25 && distance != 0)
  {
    
    delay(100);
    distance = sensorRead();
  }
 }
 delay(50);
}
int sensorRead()
{
  int a = sonar.ping_cm();
  return a;
}

