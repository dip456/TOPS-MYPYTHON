// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>

int main() {

  int n=64728, reverse = 0, remainder;

    while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}