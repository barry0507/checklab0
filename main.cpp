#include "mbed.h"


DigitalOut redLED(LED_RED);

DigitalOut greenLED(LED_GREEN);


int LedG(DigitalOut& ledpin);
int LedR(DigitalOut& ledpin);
    

int main()

{

   redLED = 1;

   greenLED = 1;

   while (true) {

       LedR(redLED);

       LedG(greenLED);

   }

}
