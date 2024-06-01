#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
    printf("\n");
}

int main() {
    struct Employee employees[5];

    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Enter employee number: ");
        scanf("%d", &employees[i].empno);

        printf("Enter employee name: ");
        scanf("%s", employees[i].empname);

        printf("Enter employee address: ");
        scanf("%s", employees[i].address);

        printf("Enter employee age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Details of Employee %d:\n", i + 1);
        displayEmployee(employees[i]);
    }

    return 0;
}
