#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // Check the size of the sum in bytes
    printf("Size of sum variable: %lu bytes\n", sizeof(sum));

    return 0;
}
