#include <stdio.h>

int main() {
    int years, days;

    // Convert years to days
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    days = years * 365; // Approximation of days in a year (without considering leap years)
    
    printf("%d years is approximately equal to %d days.\n", years, days);

    // Convert days to years
    printf("\nEnter the number of days: ");
    scanf("%d", &days);
    
    years = days / 365; // Approximation: 1 year = 365 days
    
    printf("%d days is approximately equal to %d years.\n", days, years);

    return 0;
}
