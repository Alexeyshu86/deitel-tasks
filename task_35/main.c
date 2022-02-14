#include<stdio.h>

int main()
{
	int num;
	int n1, n2, n3, n4, n5;

	printf("Enter the number: ");
	scanf_s("%d", &num);

	n1 = num / 10000;
	n2 = num % 10000 / 1000;
	n3 = num % 1000 / 100;
	n4 = num % 100 / 10;
	n5 = num % 10;

	if (n1 == n5 && n2 == n4)
		printf("number is palindrom!\n");

	return 0;
}