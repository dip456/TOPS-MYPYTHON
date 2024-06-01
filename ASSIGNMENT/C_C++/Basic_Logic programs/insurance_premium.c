#include <stdio.h>

float Premium(float salary, float percentage) {
    return (salary * percentage) / 100.0;
}

int main() {
    float salary, percentage, premium;

    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    printf("Enter the percentage of salary for insurance: ");
    scanf("%f", &percentage);

    // Calculate insurance premium
    premium = Premium(salary, percentage);

    printf("The insurance premium based on %.2f%% of %.2f salary is: %.2f\n", percentage, salary, premium);

    return 0;
}
