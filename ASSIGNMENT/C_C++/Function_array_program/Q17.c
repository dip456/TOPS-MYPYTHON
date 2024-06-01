#include <stdio.h>

// structure
struct Student{
    char name[20];
    int age;
    float grade;
};

// union
union Employee {
    char name[20];
    int employeeID;
    float salary;
};

int main() {
    struct Student studentArray[3];

    for (int i = 0; i < 3; i++){
        printf("Enter name, age, and grade for student %d: ", i + 1);
        scanf("%s %d %f", studentArray[i].name, &studentArray[i].age, &studentArray[i].grade);
    }

    printf("\nDisplaying student information using structure:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name=%s, Age=%d, Grade=%.2f\n", i + 1, studentArray[i].name, studentArray[i].age, studentArray[i].grade);
    }

    union Employee employeeArray[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter name, employee ID, and salary for employee %d: ", i + 1);
        scanf("%s %d %f", employeeArray[i].name, &employeeArray[i].employeeID, &employeeArray[i].salary);
    }

    printf("\nDisplaying employee information using union:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d: Name=%s, Employee ID=%d, Salary=%.2f\n", i + 1, employeeArray[i].name, employeeArray[i].employeeID, employeeArray[i].salary);
    }

    return 0;
}
