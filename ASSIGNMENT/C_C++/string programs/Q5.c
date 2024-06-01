//5. Write a program in C to compare two strings without using string library functions.
#include <stdio.h>  

int main() {  

    char str1[100], str2[100];  
    int i = 0;

    
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] > str2[i]) {
        printf("String 1 comes after String 2.\n");
    } else if (str1[i] < str2[i]) {
        printf("String 1 comes before String 2.\n");
    } else {
        printf("Both strings are the same.\n");
    }

    return 0;  

}