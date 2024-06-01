#include <stdio.h>

int main() {
    int marks;
    printf("please enter your marks(0-100) \n");
    scanf("%d", &marks );

    if (marks <= 30){
        printf ("you are fail\n");
    
    }
    else if ( marks >30 && marks <= 100)
   {
     printf(" you are pass");
   }
    else { printf(" wrong marks");
    }
    return 0;
}