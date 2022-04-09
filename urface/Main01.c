#include<stdio.h>

void main()
{
	int A,B;
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	if (A > B)
	{
		printf(">");
	}
	else if(A < B)
	{
		printf("<");
	}
	else if (A == B)
	{
		printf("==");
	}
}