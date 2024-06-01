#include <stdio.h>

int main() {
    float length, width, perimeter;

    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the perimeter of the rectangle
    perimeter = 2 * (length + width);

    
    printf("The circumference (perimeter) %f \n", perimeter);

    return 0;
}
