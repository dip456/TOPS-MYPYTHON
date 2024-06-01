//9. Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>

#define MAX_LENGTH 1000

int main() {
    char string[MAX_LENGTH];
    int maxLength = 0;
    int i = 0;

    printf("Enter a string: ");
    while (i < MAX_LENGTH - 1) {
        char ch = getchar(); 

        if (ch == '\n' || ch == EOF) {
            break; 
        }

        string[i] = ch; 
        i++;

        maxLength = i;
    }

    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}
