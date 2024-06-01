//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 
#include <stdio.h>
#include <stdlib.h>
int main() {
    int number=-1562, maxDigit = -1; 
    

    number = abs(number);

    
    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    printf("Maximum digit in the number: %d\n", maxDigit);

    return 0;
}
