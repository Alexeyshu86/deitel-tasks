#include<stdio.h>

int main()
{
	int num, n1, n2, n3, n4, newNum;

	num = 2245;
	
	n1 = num / 1000;
	n2 = num % 1000 / 100;
	n3 = num % 100 / 10;
	n4 = num % 10;

	n1 = (n1 + 7) % 10;
	n2 = (n2 + 7) % 10;
	n3 = (n3 + 7) % 10;
	n4 = (n4 + 7) % 10;

	newNum = n3 * 1000 + n4 * 100 + n1 * 10 + n2;

	printf("Code: %d", newNum);	//1299

	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int num, n1, n2, n3, n4, codeNum;
//
//	codeNum = 1299;
//
//	n1 = codeNum / 1000;
//	n2 = codeNum % 1000 / 100;
//	n3 = codeNum % 100 / 10;
//	n4 = codeNum % 10;
//
//	n1 = (n1 + 3) % 10;
//	n2 = (n2 + 3) % 10;
//	n3 = (n3 + 3) % 10;
//	n4 = (n4 + 3) % 10;
//
//	num = n3 * 1000 + n4 * 100 + n1 * 10 + n2;
//
//	printf("Number: %d", num);	//2245
//
//	return 0;
//}