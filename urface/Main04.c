#include <stdio.h>

void main_04()
{
	int A, B;
	scanf_s("%d", &A);
	scanf_s("%d", &B);

	if (A > 0 && B > 0)
	{
		printf("1");
	}
	else if (A < 0 && B>0)
	{
		printf("2");
	}
	else if (A < 0 && B < 0)
	{
		printf("3");
	}
	else if (A > 0 && B < 0)
	{
		printf("4");
	}
}