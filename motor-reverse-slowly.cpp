#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
    init();
    set_motor(1, -50);
    sleep1(3,500000);
    set_motor(2,50);
    sleep1(3,500000);
    stop(1);
    stop(2);

    return(0);
}
