#include <stdio.h>

int main() {
    float kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters (1 kilometer = 1000 meters)
    meters = kilometers * 1000;

    printf("%f kilometers is equal to %f meters.\n", kilometers, meters);

    return 0;
}
