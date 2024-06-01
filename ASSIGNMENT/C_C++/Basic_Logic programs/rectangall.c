#include <stdio.h>

int main() {
    float length, width, height, area;

    
    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);

    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);

    
    area = 2 * (length * width + length * height + width * height);

    printf("The  area of the rectangular prism  %f",area);

    return 0;
}
