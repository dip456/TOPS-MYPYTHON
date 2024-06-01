#include <stdio.h>

int main() {
    int years, months, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Convert years to months and days
    months = years * 12; // Each year has 12 months on average
    days = years * 365; // Approximation of days in a year (without considering leap years)

    printf("Years converted to:\n");
    printf("Months: %d\n", months);
    printf("Days: %d\n", days);

    return 0;
}
