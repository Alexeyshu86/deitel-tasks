#include<stdio.h>

int main()
{
	unsigned int counter, number, largest, saler;

	counter = 1;
	largest = 0;

	while (counter <= 10)
	{
		printf("Enter the number of items sold for %u saler: ", counter);
		scanf_s("%u", &number);
		if (largest < number)
		{
			largest = number;
			saler = counter;
		}
		counter++;
	}

	printf("largest - %u\nsaler - %u", largest, saler);


	return 0;
}