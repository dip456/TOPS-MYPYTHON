// 5.WAP to print factorial of given number

#include<stdio.h>
int main(){
    int num,fact=1,i;

    printf("enter value of num : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        fact=fact*i;

        
    }
    printf("fact is :%d ",fact);
}