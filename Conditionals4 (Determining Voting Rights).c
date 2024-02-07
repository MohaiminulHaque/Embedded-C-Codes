/*
Use conditional operators and find out if the voting eligibility
of any specific citizen. Note, citizen above 18 years can vote
in the upcoming general elections.
 */

#include<stdio.h>

int main ()
{
	int a,b;
	printf("Give the age of the citizen: \n");
	fflush(stdout);
	scanf("%d", &a);

	(a<=18)? printf("Not eligible for voting!\n"): printf("Eligible for voting!\n");
	/*
	 Conditional operators formula is as below:
	 expression1? expression2: expression3
	 where if expression1 is true, it will execute expression 2 otherwise expression3.
	  */

	return 0;
}
