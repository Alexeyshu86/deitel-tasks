#include<stdio.h>

int main()
{
	int cnt = 3;

	printf("A\tA+2\tA+4\tA+6\n\n");

	while (cnt <= 15)
	{
		printf("%d\t%d\t%d\t%d\n", cnt, cnt + 2, cnt + 4, cnt + 6);
		cnt += 3;
	}

	return 0;
}