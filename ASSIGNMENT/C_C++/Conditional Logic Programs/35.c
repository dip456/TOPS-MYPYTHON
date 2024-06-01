 //Accept the input month number and print number of days in that month. 
#include<stdio.h>
int main()
{
    int Month;

    printf("please enter month number : ");
    scanf("%d",&Month);

    switch(Month){
        case 1:
        printf("january\n");
        printf("number of days in that month:31");
        break;

        case 2:
        printf("february\n");
         printf("number of days in that month:28");
        break;

        case 3:
        printf("march\n");
         printf("number of days in that month:31");
        break;

        case 4:
        printf("april\n");
           printf("number of days in that month:30");
        
        break;

        case 5:
        printf("May\n");
           printf("number of days in that month:31");
        break;

        case 6:
        printf("June\n");
           printf("number of days in that month:30");
        break;

        case 7:
        printf("July\n");
         printf("number of days in that month:30");
        break;

        case 8:
        printf("August\n");
           printf("number of days in that month:31");
        break;

        case 9:
        printf("saptember\n");
           printf("number of days in that month:30");
        break;

        case 10:
        printf("October\n");
           printf("number of days in that month:31");
        break;

        case 11:
        printf("November\n");
           printf("number of days in that month:30");
        break;

        case 12:
        printf("December\n");
           printf("number of days in that month:31");
        break;

        default :
            printf("please enter only 1 to 12 number..!");
        
    }
}