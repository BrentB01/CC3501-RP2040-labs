#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    // Initialize the UART (serial) communication
    stdio_init_all();

    // Give some time for the serial connection to establish
    sleep_ms(2000);

    while (true) {
        // Print a message to the serial monitor
        printf("Hello, World!\n");

        // Wait for a second before sending the next message
        sleep_ms(1000);
    }

    return 0;
}
