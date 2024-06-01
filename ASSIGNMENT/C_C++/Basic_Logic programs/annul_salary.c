#include <stdio.h>

float AnnualSalary(float monthlySalary) {
    return monthlySalary * 12;
}

int main() {
    float monthlySalary, annualSalary;

    printf("Enter the person's monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate annual salary
    annualSalary = AnnualSalary(monthlySalary);

    printf("The person's annual salary is: %f\n", annualSalary);

    return 0;
}
