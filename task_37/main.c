#include<stdio.h>

int main()
{
	int a = 1;

	while (a <= 3000000)
	{
		if (a % 1000000 == 0)
			printf("%d\n", a);
		a++;
	}


	return 0;
}