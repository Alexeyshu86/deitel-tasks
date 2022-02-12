#include<stdio.h>

int main()
{
	unsigned int pass, fail, student;
	int result;

	pass = 0;
	fail = 0;
	student = 1;

	while (student <= 10)
	{
		printf("Enter result (1=pass, 2=fail): ");
		scanf_s("%d", &result);

		while (result != 1 && result != 2)
		{
			printf("Enter 1 or 2!");
			scanf_s("%d", &result);
		}

		if (result == 1)
			pass++;
		else
			fail++;

		student++;
	}

	printf("Passed %d\n", pass);
	printf("Failed %d\n", fail);

	if (pass > 8)
		puts("Bonus to instructor");


	return 0;
}