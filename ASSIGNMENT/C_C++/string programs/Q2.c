// Write a program in C to separate individual characters from a string.
#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "DIPAK";  
          
    
    printf("Individual characters from given string:\n");  
      
    for(int i = 0; i < strlen(string); i++){  
        printf("%c ", string[i]);  
    }  
          
    return 0;  
}  