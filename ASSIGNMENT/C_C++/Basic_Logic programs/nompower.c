#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int power1 = number;        // N^1 = N
    int power2 = number * number; // N^2 = N * N
    int power3 = number * number * number; // N^3 = N * N * N

    printf("First power of %d is: %d\n", number, power1);
    printf("Second power of %d is: %d\n", number, power2);
    printf("Third power of %d is: %d\n", number, power3);

    return 0;
}
