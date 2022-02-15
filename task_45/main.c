#include<stdio.h>

int main()
{
	int a, b, c, max;

	max = 0;

	printf("Enter the side a: ");
	scanf_s("%d", &a);
	printf("Enter the side b: ");
	scanf_s("%d", &b);
	printf("Enter the side c: ");
	scanf_s("%d", &c);
	
	if ((a * a + b * b) == (c * c))
		printf("+");
	else
		printf("-");

	return 0;
}