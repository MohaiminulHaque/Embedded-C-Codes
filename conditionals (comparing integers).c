/*
1. Check the given integer input numbers are equal, smaller or greater.
 */

#include<stdio.h>

int main ()
{
	int a,b;
	printf("Give the first integer number: \n");
	fflush(stdout);
	scanf("%d", &a);

	printf("Give the second integer number: \n");
	fflush(stdout);
	scanf("%d", &b);

	if (a==b)
	{
		printf("The given numbers are equal \n");
	}
	else
	{
		if (a>b)
		{
			printf("the first number is greater than second number \n");
		}
		else
		{
			printf("the second number is greater than first number\n");
		}
	}
	return 0;
}
