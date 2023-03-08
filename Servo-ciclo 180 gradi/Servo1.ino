#include <Servo.h>

Servo Servo1; 
void setup() {
  Servo1.attach (11);
}

int ruota = 0;
void loop() {
  
  while(ruota < 180){
    Servo1.write(ruota);
    ruota += 30;
    delay (500);
  }

  while(ruota <= 180){
    Servo1.write(ruota);
    ruota = ruota -  30;
    delay (500);
  }
}
