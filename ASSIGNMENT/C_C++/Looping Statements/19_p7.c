#include <stdio.h>

int main() {
    int rows = 5;
    int spaces, stars;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (spaces = i; spaces < rows; spaces++) {
            printf("  ");
        }

        // Print stars
        for (stars = 1; stars <= (2 * i - 1); stars++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
