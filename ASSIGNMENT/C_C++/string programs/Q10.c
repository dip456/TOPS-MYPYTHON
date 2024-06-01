#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str[] = "Hello, world!"; 
    char substr[10]; 
    int start_index = 7; 
    int length = 5; 
 
    strncpy(substr, &str[start_index], length); 
    substr[length] = '\0'; 
 
    printf("Substring: %s\n", substr); 
 
    return 0; 
} 