//6. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char string[1000];
    int alphabets = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i]))
            alphabets++;
        else if (isdigit(string[i]))
            digits++;
        else if (!isspace(string[i]))
            specialChars++;
    }

    printf("Total number of alphabets in the string: %d\n", alphabets);
    printf("Total number of digits in the string: %d\n", digits);
    printf("Total number of special characters in the string: %d\n", specialChars);

    return 0;
}
