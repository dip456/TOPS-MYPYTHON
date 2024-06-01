//Write a program make a summation of given number (E.g., 1523 Ans: -11) 
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    number = abs(number);

    
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }


    printf("Summation of digits in the number: %d\n", sum);

    return 0;
}
