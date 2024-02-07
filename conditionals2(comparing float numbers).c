
/*
2. Check the given float input numbers are equal, smaller or greater. iF any invalid number
is given as input, it will show an error.
 */

#include<stdio.h>
int main()
{
	float c,d;
	printf("Give the first float number: \n");
	fflush(stdout);
	if (scanf("%f", &c)==0)
	{
		printf("Input Error! Provide Number Again!\n");
		return 0;
	}
	printf("Give the second float number: \n");
	fflush(stdout);
	if (scanf("%f", &d)==0)
	{
		printf("Input Error! Provide Number Again!\n");
		return 0;
	}
	int i1,i2;
	i1=c;
	i2=d;

	if ((i1!=c) || (i2!=d))
		{
		printf("!!!We are able to compare only the integer part of given fraction numbers!!!\n");
		}

	if (i1==i2)
	{
		printf("The given numbers are equal \n");
	}
	else
	{
		if (i1>i2)
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



