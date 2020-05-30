#include <Arduino.h>
#include "breathingLight.h"

breathingLight::breathingLight(int pin){
    this->pinNum=pin;
    pinMode(pin, OUTPUT);
}

void breathingLight::breath(int d){
    for(int i=0;i<256;i++){
        analogWrite(pinNum, i);
        delay(d);
    }
    for(int i=255;i>=0;i--){
        analogWrite(pinNum, i);
        delay(d);
    }
}
