#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers up to n using a while loop
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
