#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using nested ternary operators to find the maximum number
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The maximum number among %d, %d, and %d \n max is: %d\n", num1, num2, num3, max);

    return 0;
}
