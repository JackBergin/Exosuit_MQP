#include "MuscleActuation.h" 
#include "Servo.h"

//static MuscleActuation*ma_instance;
//HOLD OFF UNTIL WE CAN ANSWER THE FOLLOWING:
//What servos will be actuated for each walking sequence?

//How to control each individual servo:
/*
   //create a local variable to store the servo's position.
  int position;
  
  // Tell servo to go to 0 degree every 20 milliseconds, stepping by one degree
  for(position = 180; position >= 0; position -= 1)
  {
     // Move to next position
     servo1.write(position);
     // Short pause to allow it to move
     delay(20);             
  }
*/
void MuscleActuation::setup()
{
    //ma_instance = this;

    servo1.attach(13);
    servo2.attach(12);
    servo3.attach(11);
    servo4.attach(10);
    servo5.attach(9);
    servo6.attach(8);
    servo7.attach(7);
    servo8.attach(6);

    //attachInterrupt(digitalPinToInterrupt(ENCA), isr, CHANGE);
    //attachInterrupt(digitalPinToInterrupt(ENCB), isr, CHANGE);
}
/**
void MuscleActuation::pwmSetup() {
    TCCR1A = 0xA8; 
    TCCR1B = 0x11; 
    ICR1 = 400;
    OCR1C = 0;
}
**/

void MuscleActuation::test() 
{
   Serial.println("Entered the test method");
   int position;

   for(position = 180; position >= 0; position -= 1)
   {
      Serial.println("In the for loop");
      // Move to next position
      servo1.write(position);
      // Short pause to allow it to move
      delay(200);             
   }
   Serial.println("Out of the loop");
  
   //Reset to the servo's positioning
   delay(100);
   servo1.write(0);
}

/**
 * Interrupt Serice Routine for encoder operation

void MuscleActuation::isr() {
    ma_instance->encoderInterrupt(); // Call the encoder function from a pointer to avoid nonstatic reference.
}
void MuscleActuation::encoderInterrupt() {
    newValue = (digitalRead(ENCA)<<1) | digitalRead(ENCB);
    char value = encoderArray[oldValue] [newValue];
    if (value == X) {
        errorCount++;
    } else {
        count -= value;
    }
    oldValue = newValue;
}
**/

void MuscleActuation::gr1() {
   
}
void MuscleActuation::gr2() {
   
}
void MuscleActuation::gr3() {
   
}
void MuscleActuation::gr4() {
   
}
void MuscleActuation::gr5() {
   
}
void MuscleActuation::gl1() {
   
}
void MuscleActuation::gl2() {
   
}
void MuscleActuation::gl3() {
   
}
void MuscleActuation::gl4() {
   
}
void MuscleActuation::gl5() {
   
}
