#include <stdio.h>

int main() {
    float side_a, side_b, side_c, perimeter;

    
    printf("Enter the length of side a: ");
    scanf("%f", &side_a);

    printf("Enter the length of side b: ");
    scanf("%f", &side_b);

    printf("Enter the length of side c: ");
    scanf("%f", &side_c);

    
    perimeter = side_a + side_b + side_c;

    // Display the perimeter of the triangle
    printf("The perimeter of the triangle  %f\n", perimeter);

    return 0;
}
