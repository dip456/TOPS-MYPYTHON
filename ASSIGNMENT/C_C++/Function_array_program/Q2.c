#include <stdio.h>

// Function 
float addition(float num1, float num2);
float subtraction(float num1, float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);

int main() {
    int choice;
    float num1, num2, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            result = addition(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtraction(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiplication(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = division(num1, num2);
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice! Please choose a number between 1 and 4.\n");
            break;
    }

    return 0;
}

float addition(float num1, float num2) {
    return num1 + num2;
}

float subtraction(float num1, float num2) {
    return num1 - num2;
}

float multiplication(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    return num1 / num2;
}
