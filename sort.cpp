#include <xc.h>

// Define configuration bits
#pragma config FOSC = HSPLL    // High-Speed Crystal with PLL
#pragma config WDTEN = OFF     // Watchdog Timer Disabled
#pragma config LVP = OFF       // Low Voltage Programming Disabled

#define _XTAL_FREQ 20000000   // Crystal frequency

void bubbleSortAscending(unsigned char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(unsigned char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main() {
    // Initialize PORTB as output
    TRISB = 0x00;
    PORTB = 0x00;

    // Sample array of 8-bit numbers
    unsigned char numbers[] = {5, 2, 9, 1, 7, 3, 8, 4};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Sort the numbers in ascending order
    bubbleSortAscending(numbers, n);
    // Output sorted numbers in ascending order to PORTB
    for (int i = 0; i < n; i++) {
        PORTB = numbers[i];
        __delay_ms(1000); // Delay for 1 second (adjust as needed)
    }

    // Sort the numbers in descending order
    bubbleSortDescending(numbers, n);
    // Output sorted numbers in descending order to PORTB
    for (int i = 0; i < n; i++) {
        PORTB = numbers[i];
        __delay_ms(1000); // Delay for 1 second (adjust as needed)
    }

    while (1) {
        // Program ends here
    }
}
