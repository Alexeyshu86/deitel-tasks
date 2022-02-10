#include<stdio.h>

void main()
{
	int a, b, c;

	a = 5;
	b = 12;

	printf("a = %d\nb = %d\n\n", a, b);

	printf("c = --a\n");
	c = --a;
	printf("c = %d\na = %d\n\n", c, a);

	printf("c = b--\n");
	c = b--;
	printf("c = %d\nb = %d\n\n", c, b);

	return 0;
}