// n!= n * (n - 1) * (n - 2) * ... * 1 

//#include<stdio.h>
//
//int main()
//{
//	int num, fact, i;
//
//	fact = 1;
//
//	printf("Enter the number: ");
//	scanf_s("%d", &num);
//
//	i = num;
//
//	if (num == 0)
//		printf("0! = 1\n");
//	else
//	{
//		while (i > 0)
//		{
//			fact *= i;
//			i--;
//		}
//		printf("%d! = %d\n", num, fact);
//	}
//
//
//	return 0;
//}




// e = 1 + 1/1! + 1/2! + 1/3! + ...

//#include<stdio.h>
//
//int main()
//{
//	int num, i, fact;
//	float e = 1;
//
//	printf("Enter the number: ");
//	scanf_s("%d", &num);
//
//	while (num > 0)
//	{
//		i = num;
//		fact = 1;
//
//		while (i > 0)
//		{
//			fact *= i;
//			i--;
//		}
//		e = e + (1 / (float)fact);
//		num--;
//	}
//
//	printf("e = %f\n", e);
//
//
//	return 0;
//}




// e^x = 1 + x/1! + (x*x)/2! + (x*x*x)/3! + ...


#include<stdio.h>

int main()
{
	float e;
	int fact, num, x, i, j;

	printf("Enter the number: ");
	scanf_s("%d", &num);

	x = num;
	e = 1;
	i = 1;

	while (i <= num)
	{
		j = i;
		fact = 1;
		while (j > 0)
		{
			fact *= j;
			j--;
		}
		e = e + (float)x / fact;
		x *= num;
		++i;
	}
	printf("e^%d = %f", num, e);
	
	return 0;
}