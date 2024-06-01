 //Monday to Sunday using switch case
 #include<stdio.h>
 int main(){
    int i;
    printf("enter 1 to 7 number ....!");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
    printf("monday");
    break;

    case 2:
    printf("Tuesday");
    break;

     case 3:
    printf("Wednesday");
    break;

     case 4:
    printf("Thursday");
    break;

     case 5:
    printf("Friday");
    break;

     case 6:
    printf("Saturday");
    break;

     case 7:
    printf("Sunday");
    break;
    
    default:
    printf("this is false");
     break;
    }
 }