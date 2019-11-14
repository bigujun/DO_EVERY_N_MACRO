# DO_EVERY_N_MACRO
Arduino Macro to periodicaly run tasks
extracted from https://github.com/FastLED/FastLED

# How to use
 ```cpp
#include "doevery.h"

void setup(){
   Serial.begin(115200);
}

void loop(){

  EVERY_N_MILLIS(500){
    Serial.println("This will run every 500 milliseconds");
  }

  EVERY_N_SECONDS(10){
    Serial.println("This will run every 10 seconds");
  }

  EVERY_N_MINUTES(5){
    Serial.println("This will run every 5 minutes");
  }
  
  EVERY_N_HOURS(2){
    Serial.println("This will run every 2 HOURS");
  }

}



 ```
