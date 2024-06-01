 /*Write a C program to input basic salary of an employee and calculate its 
Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%\*/

#include<stdio.h>
int main(){
    int salary;
    float gross,da,hra;

    printf("please enter salary of employee : ");
    scanf("%d",&salary);

    if(salary <= 10000){
        da = salary * 0.8;
        hra = salary * 0.2;

    }
    else if (salary <=20000)
    {
        da = salary * 0.9;
        hra = salary * 0.25;
    }
    else{
        da = salary * 0.95;
        hra = salary * 0.30;
    }
    gross = salary + da + hra;

    printf("this is basic salary : %d\n",salary);
    printf("DA : %f\n",da);
    printf("HRA : %f\n",hra);
    printf("this is gross salary : %f",gross);

    return 0;
    
}