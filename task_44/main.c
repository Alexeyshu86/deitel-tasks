#include<stdio.h>

int main()
{
	float a, b, c;
	
	printf("Enter the side a: ");
	scanf_s("%f", &a);
	printf("Enter the side b: ");
	scanf_s("%f", &b);
	printf("Enter the side c: ");
	scanf_s("%f", &c);

	if ((a > 0 && b > 0 && c > 0) && ((a + b) > c && (a + c) > b && (b + c) > a))
		printf("It is triangle");
	else
		printf("Not triangle");

	
	return 0;
}