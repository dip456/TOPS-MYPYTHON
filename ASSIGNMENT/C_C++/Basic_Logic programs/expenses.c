#include <stdio.h>

int main() {
    float expense, totalExpense = 0.0, averageExpense;
    
    // Input expenses from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expense);
        totalExpense += expense; // Calculate total expense
    }

    // Calculate average expense
    averageExpense = totalExpense / 5;

    printf("\nTotal of 5 expenses: %f\n", totalExpense);
    printf("Average of 5 expenses: %f\n", averageExpense);

    return 0;
}
