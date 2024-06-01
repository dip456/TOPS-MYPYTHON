// 11. Accept 5 names from user at run time.
#include <stdio.h>
#define MAX_NAMES 5
#define MAX_NAME_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];

    printf("Enter 5 names:\n");

    for (int i = 0; i < MAX_NAMES; ++i) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nThe names you entered are:\n");
    for (int i = 0; i < MAX_NAMES; ++i) {
        printf("%d: %s\n", i + 1, names[i]);
    }

    return 0;
}
