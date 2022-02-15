#include<stdio.h>

int main()
{
	float rad, p;

	p = 3.14159;

	printf("Enter the radius: ");
	scanf_s("%f", &rad);

	printf("Diameter of the circle: %.5f\n", rad * 2);
	printf("Circumference length: %.5f\n", 2 * p * rad);
	printf("Area of the circle: %.5f\n", p * rad * rad);

	return 0;
}