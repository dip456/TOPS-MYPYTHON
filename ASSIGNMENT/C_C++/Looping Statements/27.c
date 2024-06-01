//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n
#include<stdio.h>
int main()
{
    float s, end=10,sum=0;
    
    for(s=1;s<=end;s++)
    {
        if ((int)s%2==1){
            sum+=s/(s+1);
        }
            
        else{
            sum-=s/(s+1);
        }
            
    }
    printf(" 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .... : %f",sum);
    return 0;
}
