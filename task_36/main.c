#include<stdio.h>

int main()
{
	int num, dec;
	int n1, n2, n3, n4, n5;

	num = 10001;

	n1 = num % 100000 / 10000;
	n2 = num % 10000 / 1000;
	n3 = num % 1000 / 100;
	n4 = num % 100 / 10;
	n5 = num % 10;

	dec = n1 * 16 + n2 * 8 + n3 * 4 + n4 * 2 + n5 * 1;

	printf("%d", dec);

	return 0;
}