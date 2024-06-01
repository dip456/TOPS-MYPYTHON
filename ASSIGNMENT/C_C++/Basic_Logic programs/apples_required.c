#include <stdio.h>

int main() {
    int num_stud, total;
    int apples = 5;

    printf("Enter the number of students: ");
    scanf("%d", &num_stud);

    total = num_stud * apples;

    printf("Total apples required: %d\n", total);

    return 0;
}
