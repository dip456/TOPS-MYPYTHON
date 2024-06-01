//6. WAP to print Fibonacci series up to given numbers 
#include<stdio.h>
int main(){
    int i,n;
    int t1=0,t2=1;

     printf("please enter no : ");
     scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        int term=t1+t2;   
        printf(" %d ",term);
        t1=t2;
        t2=term;
        term=t1+t2;
    }
    return 0;
}