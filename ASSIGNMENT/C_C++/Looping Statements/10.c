//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5) 

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number, firstDigit, lastDigit;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number);

    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    lastDigit = number % 10;

    int sum = firstDigit + lastDigit;

    printf("Summation of first and last digits: %d\n", sum);

    return 0;
}
