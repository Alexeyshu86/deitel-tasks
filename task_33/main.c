#include<stdio.h>

int main()
{
	int a, i, j;

	printf("Enter the length of the side of the square: ");
	scanf_s("%d", &a);

	while (a < 1 || a>20)
	{
		printf("Enter the length of the side of the square: ");
		scanf_s("%d", &a);
	}

	i = a;

	while (i != 0)
	{
		j = a;
		while (j != 0)
		{
			printf("*");
			j--;
		}
		puts("");
		i--;
	}

	return 0;
}