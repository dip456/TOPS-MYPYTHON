#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, remainder, originalNum;
    originalNum = num;

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    if (originalNum == reversedNum) {
        return 1; // Palindrome
    } else {
        return 0; // Not a palindrome
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
