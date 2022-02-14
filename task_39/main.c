#include<stdio.h>

int main()
{
	int num, x, y, count;
	
	count = 0;
	num = 77777777;
	x = 10;
	y = 1;

	if (num == 7)
		count++;

	while (num / x != 0)
	{
		if (num % x / y == 7)
			count++;
		x *= 10;
		y *= 10;
	}

	if (num / y == 7)
		count++;

	printf("%d", count);

	return 0;
}