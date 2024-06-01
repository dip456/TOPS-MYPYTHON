#include <stdio.h>

int main() {
    float side, area;

    //  length of the cube
    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    // Calculate  area of the cube
    area = 6 * side * side;

    // Display area of the cube
    printf("The area of the cube with side length %f is: %f\n", side,area);

    return 0;
}

