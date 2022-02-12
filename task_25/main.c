#include<stdio.h>

int main()
{
	int cnt = 1;

	printf("N\t10*N\t100*N\t1000*N\n\n");

	while (cnt <= 10)
	{
		printf("%d\t%d\t%d\t%d\n", cnt, cnt * 10, cnt * 100, cnt * 1000);
		cnt++;
	}


	return 0;
}