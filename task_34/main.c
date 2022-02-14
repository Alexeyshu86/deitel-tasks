#include<stdio.h>

int main()
{
	int a, i, j;

	printf("Enter the length of the side of the square: ");
	scanf_s("%d", &a);

	while (a < 3 || a>20)
	{
		printf("Enter the length of the side of the square: ");
		scanf_s("%d", &a);
	}

	i = a;

	while (i != 0)
	{
		j = 1;
		if (i == a || i == 1)
		{
			while (j <= a)
			{
				printf("*");
				j++;
			}
		}
		else
		{
			while (j <= a)
			{
				if (j == 1 || j == a)
					printf("*");
				else
					printf(" ");
				j++;
			}
		}
		i--;
		printf("\n");
	}

	return 0;
}