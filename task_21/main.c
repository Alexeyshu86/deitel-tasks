#include<stdio.h>

void main()
{
	unsigned int hours;
	float rate, salary;

	printf("Enter the amount of hours worked (-1, if the input is finished):");
	scanf_s("%u", &hours);

	while (hours != -1)
	{
		printf("Enter the employee's hourly rate: ");
		scanf_s("%f", &rate);

		if (hours <= 40)
			salary = hours * rate;

		if (hours > 40)
			salary = 40 * rate + (/*(float)*/(hours - 40)) * rate * 1.5;

		printf("Salary is $%.2f\n", salary);

		printf("\nEnter the amount of hours worked (-1, if the input is finished):");
		scanf_s("%u", &hours);
	}

	return 0;
}