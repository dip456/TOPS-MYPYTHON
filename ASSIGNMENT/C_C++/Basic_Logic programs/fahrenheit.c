#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius using the formula: C = (F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
