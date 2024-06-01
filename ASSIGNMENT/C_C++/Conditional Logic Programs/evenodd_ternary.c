#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using ternary operator to check if the number is even or odd
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}
