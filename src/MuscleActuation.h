#include <Arduino.h>
#include "Servo.h"

class MuscleActuation { 
    public:     
        void gr1();
        void gr2();
        void gr3();
        void gr4();
        void gr5();
        void gl1();
        void gl2();
        void gl3();
        void gl4();
        void gl5();
        void setup();
        void test();
        //void pwmSetup();
    private:
        Servo servo1;  
        Servo servo2;  
        Servo servo3;  
        Servo servo4;  
        Servo servo5;  
        Servo servo6;  
        Servo servo7;  
        Servo servo8; 
        /*
        void encoderInterrupt();
        void isr();
        const int ENCA = 2;
        const int ENCB = 3;  
        int newValue = 0;
        int oldValue = 0;
        long count = 0;
        long errorCount = 0;
        const char X = 5;
        char encoderArray[4][4] = {
            {0, -1, 1, X},
            {1, 0, X, -1},
            {-1, X, 0, 1},
            {X, 1, -1, 0}
        };*/
};