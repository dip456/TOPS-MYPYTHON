/*
A
A B
A B C 
A B C D 
A B C D E
*/
#include <stdio.h>

int main() {
    int rows = 5;
    char ch;

    for (int i = 1; i <= rows; i++) {
        ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
