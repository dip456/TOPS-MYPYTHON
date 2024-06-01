//22. Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>

int isPalindrome(int num) {
    int Num1 = num;
    int reversedNum = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return Num1 == reversedNum;
}

int main() {
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (isPalindrome(n1)) {
        printf("%d is a palindrome number.\n", n1);
    } else {
        printf("%d is not a palindrome number.\n", n1);
    }

    if (isPalindrome(n2)) {
        printf("%d is a palindrome number.\n", n2);
    } else {
        printf("%d is not a palindrome number.\n", n2);
    }

    if (isPalindrome(n3)) {
        printf("%d is a palindrome number.\n", n3);
    } else {
        printf("%d is not a palindrome number.\n", n3);
    }

    return 0;
} 