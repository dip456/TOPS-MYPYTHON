#include <stdio.h>

int main() {
    char string1[100], string2[100];
    int length1 = 0, length2 = 0;

    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);

    while (string1[length1] != '\0') {
        length1++;
    }
    while (string2[length2] != '\0') {
        length2++;
    }

    if (string1[length1 - 1] == '\n') {
        string1[--length1] = '\0';
    }
    if (string2[length2 - 1] == '\n') {
        string2[--length2] = '\0';
    }

    for (int i = 0; i < length2; i++) {
        string1[length1 + i] = string2[i];
    }
    string1[length1 + length2] = '\0'; 

    printf("Combined string: %s\n", string1);

    return 0;
}
