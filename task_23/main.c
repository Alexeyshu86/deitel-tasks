#include<stdio.h>

int main()
{
	int a = 1;

	while (a < 11)
	{
		printf("%-4d", a++);
	}


	return 0;
}