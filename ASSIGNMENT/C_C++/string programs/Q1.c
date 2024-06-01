//Write a program in C to find the length of a string without using library functions. 
#include <stdio.h>
int main()
{
   
    char str[100];
    int i,length=0;
    
     
    printf("Enter a string : ");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; i++)
    {
        length++; 
    }
    
    printf("\nLength of input string: %d",length);
    
     return 0;
}