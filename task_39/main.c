#include<stdio.h>

int main()
{
	int num, x, y, count;
	
	count = 0;
	num = 755778;
	x = 10;
	y = 1;

	if (num == 7)
		count++;
	else
	{
		while (num / x != 0)
		{
			if (num % x / y == 7)
				count++;
			x *= 10;
			y *= 10;
		}

		if (num / y == 7)
			count++;
	}


	printf("%d", count);

	return 0;
}