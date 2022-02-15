#include<stdio.h>

int main()
{
	int i, j;

	i = 1;

	while (i <= 8)
	{
		if (i % 2 == 0)
			printf(" ");

		j = 1;

		while (j <= 8)
		{
			printf("* ");
			j++;
		}

		printf("\n");
		i++;
	}



	return 0;
}