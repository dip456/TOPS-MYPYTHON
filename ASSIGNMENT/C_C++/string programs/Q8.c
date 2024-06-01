#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int vowels= 0, consonants = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        char ch = tolower(string[i]); 

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Total number of vowels in the string: %d\n", vowels);
    printf("Total number of consonants in the string: %d\n", consonants);

    return 0;
}
