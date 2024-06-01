#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping using a third variable: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
