 //Calculate 5 numbers from user and calculate number of even and odd using of while loop 
 #include <stdio.h>

int main() {
    int count = 0,evenCount = 0,oddCount = 0;
    int number;

    printf("Enter 5 numbers:\n");

    while (count < 5) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenCount++; // Increment even count if the number is even
        } else {
            oddCount++; // Increment odd count if the number is odd
        }

        count++; // Increment the count of entered numbers
    }

    printf("\nNumber of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
