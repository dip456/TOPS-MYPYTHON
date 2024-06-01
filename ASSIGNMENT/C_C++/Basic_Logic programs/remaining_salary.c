#include <stdio.h>

int main() {
    float monthlySalary, remainingSalary, insurancePremium, loanInstallment;

    printf("Enter the person's monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate insurance premium (10% of the salary)
    insurancePremium = 0.10 * monthlySalary;

    // Deduct insurance premium from the salary
    remainingSalary = monthlySalary - insurancePremium;

    // Calculate loan installment (10% of the remaining salary)
    loanInstallment = 0.10 * remainingSalary;

    // Deduct loan installment from the remaining salary
    remainingSalary -= loanInstallment;

    printf("Initial monthly salary: %f\n", monthlySalary);
    printf("Deducted insurance premium: %f\n", insurancePremium);
    printf("Deducted loan installment: %f\n", loanInstallment);
    printf("Remaining salary after deductions: %f\n", remainingSalary);

    return 0;
}
