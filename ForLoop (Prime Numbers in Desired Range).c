/*Printing Prime Numbers Using
for loops from 1 to desired number*/

#include<stdio.h>

int main()
{
	int a,i,j;
	printf("Enter your range of numbers to check prime numbers:\n");
	fflush(stdout);
	scanf("%d",&a);

	for (i = 2; i <= a; i++)
	{
		int is_prime = 1;
		for (j = 2; j <= i/2; j++)
	        {
	            if (i % j == 0)
	            {
	                is_prime = 0;
	                break;
	            }
	        }
	        if (is_prime == 1)
	        {
	            printf("%d\n", i);
	        }
	    }
	return 0;
}



