#include<stdio.h>

int main()
{
	int cnt, max1, max2, val, tmp;

	cnt = 1;

	max1 = max2 = 0;

	while (cnt<=10)
	{
		printf("Enter the number: ");
		scanf_s("%d", &val);

		if (max1 < val)
		{
			max1 = val;
			if (max2 < max1)
			{
				tmp = max2;
				max2 = max1;
				max1 = tmp;
			}
		}
		cnt++;
	}

	printf("First max number - %d\n", max2);
	printf("Second max number - %d\n", max1);

	return 0;
}