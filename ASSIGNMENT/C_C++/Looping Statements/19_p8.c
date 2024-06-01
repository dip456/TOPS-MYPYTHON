//spiral petern...........
#include<stdio.h>

int main() {
    int size;

    printf("please enter size : ");
    scanf("%d", &size);

    int left, right, i = 1, r1 = 0, r2 = size - 1, c1 = 0, c2 = size - 1;
    int arr[size][size];

    while (i <= size * size) {
        for (left = c1; left <= c2; left++) {
            arr[r1][left] = i++;
        }
        for (right = r1 + 1; right <= r2; right++) {
            arr[right][c2] = i++;
        }
        for (left = c2 - 1; left >= c1; left--) {
            arr[r2][left] = i++;
        }
        for (right = r2 - 1; right > r1; right--) {
            arr[right][c1] = i++;
        }
        r1++;
        r2--;
        c1++;
        c2--;
    }

    printf("spiral pattern:\n");
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}
