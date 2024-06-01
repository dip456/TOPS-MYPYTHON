#include<stdio.h>
int main(){
    int i;

    printf("enter value of i :");
    scanf("%d",&i);

    if(i>0){
        printf("this is a positive nomber..!");
    }
    else if(i<0){
        printf("this value is a nagative..!");

    }
    else if(i==0){
        printf("this value is zero");
    }
    else{
        printf("value is wronge please enter any nomber...!");
    }
}