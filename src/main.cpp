#include <Arduino.h>
#include "IMUTest.h"
#include "GY521.h"
#include "MuscleActuation.h"

MuscleActuation mA;
IMUTest iU;

void setup() {
    Serial.begin(9600);
}
void loop() {
    Serial.println("In the loop");
    mA.test();
    Serial.println("Exited method");
    Serial.println("---------------------------");
    delay(1000);
}