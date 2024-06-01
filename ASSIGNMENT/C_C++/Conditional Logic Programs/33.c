//WAP to input the week number and print week day. 
#include<stdio.h>
int main(){
    int week;

    printf("enter the week :");
    scanf("%d",&week);

    if (week == 1)
    {
        printf("Monday");
    }
    else if(week == 2){
        printf("Tuesday");
    }
    else if(week == 3){
        printf("Wednesday");
    }
    else if (week == 4)
    {
        printf("Thursday");
    }
    else if (week == 5)
    {
        printf("friday");
    }
    else if (week == 6)
    {
        printf("saturday");
    }
    else if (week == 7)
    {
        printf("sunday");
    }
    else{
        printf("please enter number only 1 to 7 ...!");
    }
}
    
    
    

    
    