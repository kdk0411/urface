#include <stdio.h>

void main_03()
{
	int num;
	scanf_s("%d", &num);

	if (num % 4 == 0 && num % 100 != 0 || num % 400 == 0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}