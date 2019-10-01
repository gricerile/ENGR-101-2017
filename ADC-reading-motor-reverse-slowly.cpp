
#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
    init();
    while(true){
        Int adc_reading = read_analog(0);
        Int rotation = adc_reading / -8;
        set_motor(1.rotation);
        sleep1(0,500);
        set_motor(2.-rotation);
        sleep1(0,500);
    }
}
