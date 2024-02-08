/*
While Loop for printing 1 to 100 integer numbers.
 */

#include<stdio.h>
#include<stdint.h>

int main()

{
	uint8_t a=1; //unsigned integer is used.

	while (a<=100)
	{
	printf("%d \n", a);
	a++;
	fflush(stdout);
	}
	return 0;
}

