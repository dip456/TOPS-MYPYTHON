// 8. Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main(){
    int a[5],sum=0;
    printf("enter array element : ");
    for(int i=0;i<5;i++){
        scanf("%d",& a[i]);
    }
    printf("sum of array : ");

    for(int i=0;i<5;i++){
         sum = sum +a[i];
    }
    printf("sum of array : %d",sum);
}
