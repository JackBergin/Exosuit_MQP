#include "GY521.h"
#include "IMUTest.h" 

GY521 sensor(0x69);

uint32_t counter = 0;

void IMUTest::setup(){
    Serial.begin(115200);
    Serial.println("Beginning the program:");
    delay(100);

    Wire.begin();

    delay(100);

    while(sensor.wakeup() == false){
        Serial.print("Time: ");
        Serial.print(millis());
        Serial.println("\tCould not connect to the GY521 sensor!");
    }

    sensor.setAccelSensitivity(0);  // 2g
    sensor.setGyroSensitivity(0);   // 250 degrees/s

    sensor.setThrottle();
    Serial.println("start...");
    
    // set callibration values from calibration sketch.
    //Angle calibration for yaw, pitch, roll
    sensor.axe = 0;
    sensor.aye = 0;
    sensor.aze = 0;

    //Gyro calibration for x, y, and z
    sensor.gxe = 0;
    sensor.gye = 0;
    sensor.gze = 0;
}
void IMUTest::legPosition()
{
   setup();
   int ax1 = sensor.getAngleX();
   int ay1 = sensor.getAngleY();
   int az1 = sensor.getAngleZ();
   int gx1 = sensor.getGyroX();
   int gy1 = sensor.getGyroY();
   int gz1 = sensor.getGyroZ();
   
   Serial.print("Counter: ");
   Serial.print(counter);
   Serial.print('\t');
   Serial.print("AX value: ");
   Serial.print(ax1);
   Serial.print('\t');
   Serial.print("AY value: ");
   Serial.print(ay1);
   Serial.print('\t');
   Serial.print("AZ value: ");
   Serial.print(az1);
   Serial.print('\t');
   Serial.print("GX value: ");
   Serial.print(gx1);
   Serial.print('\t');
   Serial.print("GY value: ");
   Serial.print(gy1);
   Serial.print('\t');
   Serial.print("GZ value: ");
   Serial.print(gz1);
   Serial.print('\t');
   Serial.println();

  counter++;
  delay(1000);
}


//This will all be for the later application of the IMU on the suit. 
//For now just be satisfied with the testing that can be completed above.
/*
bool IMUTest::gr1(bool checker) {
    return checker;
}
bool IMUTest::gr2(bool checker) {
    return checker;
}
bool IMUTest::gr3(bool checker) {
    
    return checker;
}
bool IMUTest::gr4(bool checker) {
    return checker;
}
bool IMUTest::gr5(bool checker) {
    
    return checker;
}
bool IMUTest::gl1(bool checker) {
    return checker;
}
bool IMUTest::gl2(bool checker) {
    return checker;
}
bool IMUTest::gl3(bool checker) {
    return checker;
}
bool IMUTest::gl4(bool checker) {
    return checker;
}
bool IMUTest::gl5(bool checker) {
    return checker;
}
*/