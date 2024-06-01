#include <stdio.h>

int main() {
    float totalSalary = 0.0;
    float salary, averageSalary;
    char name[50];

    for (int i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", name);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salary);

        totalSalary += salary; 
    }

    averageSalary = totalSalary / 5;

    printf("\nTotal Salary of 5 employees: %.2f\n", totalSalary);
    printf("Average Salary of 5 employees: %.2f\n", averageSalary);

    return 0;
}
