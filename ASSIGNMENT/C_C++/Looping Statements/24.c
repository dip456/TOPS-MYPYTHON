#include <stdio.h>

int findSum(int num) {
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n, till which sum is required: ");
    scanf("%d", &n);
    printf("%d\n", findSum(n));
    return 0;
}
