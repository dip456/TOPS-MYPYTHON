// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main(){
    int s,e=5,sum=0;
    for(s=1;s<=e;s++){
        if(s!=e){
            printf("(%d * %d)+",s,s);
        }
        else{
            printf("(%d * %d)+",s,s);
        }
        sum+=(s*s);
    }
    printf("%d",sum);
}
