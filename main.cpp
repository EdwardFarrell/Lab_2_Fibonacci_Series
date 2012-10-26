#include "mbed.h"
#include "C12832_lcd.h"

C12832_LCD lcd;

int main()
{
    int j=0;
    lcd.cls();
    lcd.locate(0,3);
    lcd.printf("mbed application board!");

    while(true) {   // this is the third thread
        lcd.locate(0,15);
        lcd.printf("Counting : %d",j);
        j++;
        wait(1.0);
    }
}
