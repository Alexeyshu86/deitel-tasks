#include<stdio.h>

int main()
{
	int row = 10;
	int column;

	while (row >= 1)
	{
		column = 1;
		while (column <= 10)
		{
			printf("%s", row % 2 ? "<" : ">");
			column++;
		}
		row--;
		printf("\n");
	}

//comment 1
	return 0;
}
