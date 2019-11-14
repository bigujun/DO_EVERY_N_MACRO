#include <Arduino.h>
#include "doevery.h"

void setup(){
  Serial.begin(115200);
  Serial.println("Start....");
}

void loop(){
  EVERY_N_SECONDS(1){
    Serial.println("1S");
  }
  EVERY_N_SECONDS(5){
    Serial.println("5S");
  }
  EVERY_N_SECONDS(3){
    Serial.println("3S");
  }
}