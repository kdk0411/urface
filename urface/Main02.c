#include<stdio.h>

void main_02()
{
	int num;
	scanf_s("%d", &num);

	while (0 <= num && num <= 100)
	{
		if (90 <= num && num <= 100)
		{
			printf("A");
		}
		else if(80<=num&&num<=89)
		{
			printf("B");
		}
		else if (70 <= num && num <= 79)
		{
			printf("C");
		}
		else if (60 <= num && num <= 69)
		{
			printf("D");
		}
		else
		{
			printf("F");
		}
		break;
	}
}