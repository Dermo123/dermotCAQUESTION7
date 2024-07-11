#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    while (1) {
        led1 = !led1; // Toggle LED1 state every 2 seconds
        ThisThread ::sleep_for(2s);

        led2 = !led2; // Toggle LED2 state every 5 seconds
         ThisThread ::sleep_for(5s);

    }
}
