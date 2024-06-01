#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Sum: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Difference: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Product: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Division: %.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Modulo: %.2f\n", result);
            } else {
                printf("Error! Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
