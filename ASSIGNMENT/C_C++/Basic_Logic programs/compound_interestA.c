#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int time) {
    float amount;
    amount = principal * pow(1 + (rate / 100), time);
    return amount;
}

float calculateCompoundInterestValue(float principal, float rate, int time) {
    float amount = calculateCompoundInterest(principal, rate, time);
    float interest = amount - principal;
    return interest;
}

int main() {
    float principal, rate;
    int time;
    float amount, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%d", &time);

    // Calculate total amount
    amount = calculateCompoundInterest(principal, rate, time);

    // Calculate compound interest
    interest = calculateCompoundInterestValue(principal, rate, time);

    printf("The total amount after %d years is: %.2f\n", time, amount);
    printf("The compound interest after %d years is: %.2f\n", time, interest);

    return 0;
}
