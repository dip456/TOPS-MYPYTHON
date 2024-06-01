#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping using multiplication and division
    num1 = num1 * num2; // Multiply num1 by num2
    num2 = num1 / num2; // Divide num1 (which now holds num1*num2) by num2 to get num1
    num1 = num1 / num2; // Divide num1 (which now holds num1*num2) by new num2 to get num2

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
