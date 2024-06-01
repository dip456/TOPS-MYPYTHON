// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main()
{
    int st,e=10,sum=10;
    for(st=1;st<=e;st++){
        for(int j=1;j<=st;j++){
            sum+=j;
        }
    }
    printf("the series sum is:(1)+(1+2)+(1+2+3)+(1+2+3+4)........ %d",sum);
}