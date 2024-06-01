/*1. Write a C program to accept two integers and check whether they are equal 
or not */
#include<stdio.h>
int main(){
    int a,b;

    printf("please enter value of a : ");
    scanf("%d",&a);

    printf("please enter value of b : ");
    scanf("%d",&b);

    if(a == b)
    {
        printf("this value is a equal...!");
    }
    else{
        printf("this value is a not equal..!");
    }
    return 0;
}