#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[40]; 
    printf (" \n Enter a string : ");  
    scanf ("%s", str);  
      
    printf (" \n reverse of a string: %s ", strrev(str));  
    return 0;  
}  