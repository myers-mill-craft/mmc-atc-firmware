#ifndef ATC_h
#define ATC_h

#include "Arduino.h"

class ATC 
{
   
    public:
        ATC();
        void init();
        void processSerial();
        
    private:
        void procesCommand (char* data);
}; 

#endif /* ATC_h */