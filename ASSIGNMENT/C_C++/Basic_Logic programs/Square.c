#include <stdio.h>

int main(void) {
	float squareLength;

	printf("Enter length of square:");
	scanf("%f", &squareLength);

	float area = squareLength * squareLength;

	printf("Area of square is: %f \n", area);

	float c = 4 * squareLength;

	printf("Circumference of square is: %f ", c);
}