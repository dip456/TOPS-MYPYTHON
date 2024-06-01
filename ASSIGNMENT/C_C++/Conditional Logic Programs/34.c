//Accept month number and display month name 
#include<stdio.h>
int main()
{
    int Month;

    printf("please enter month number : ");
    scanf("%d",&Month);

    switch(Month){
        case 1:
        printf("january");
        break;

        case 2:
        printf("february");
        break;

        case 3:
        printf("march");
        break;

        case 4:
        printf("april");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;

        case 8:
        printf("August");
        break;

        case 9:
        printf("saptember");
        break;

        case 10:
        printf("October");
        break;

        case 11:
        printf("November");
        break;

        case 12:
        printf("December");
        break;

        default :
            printf("please enter only 1 to 12 number..!");
        
    }
}