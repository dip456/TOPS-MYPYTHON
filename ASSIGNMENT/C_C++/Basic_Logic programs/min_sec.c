#include <stdio.h>

int main() {
    int minutes, seconds, hours;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Convert minutes to seconds and hours
    seconds = minutes * 60; // Each minute has 60 seconds
    hours = minutes / 60;   // Each hour has 60 minutes

    printf("Minutes converted to:\n");
    printf("Seconds: %d\n", seconds);
    printf("Hours: %d\n", hours);

    return 0;
}
