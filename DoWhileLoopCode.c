/*
 * DoWhileLoopCode.c
 *
 *  Created on: Feb 7, 2024
 *      Author: mhaqu
 */

#include<stdio.h>
#include<stdint.h> //used for defining and using specific size variables

int main()
{
	int a,c;
	printf("Enter your chosen number:\n");
	fflush(stdout);
	scanf("%d",&a);

	do{
		switch(a)
		{
		case 1:
			printf("Your selection is 1 \n");
			break;
		case 2:
			printf("Your selection is 2 \n");
			break;
		case 3:
			printf("Your selection is 3 \n");
			break;
		default:
			printf("Defult Value! \n");
			break;
		}
		printf("Enter your chosen number:\n");
		fflush(stdout);
		scanf("%d",&a);
		printf("Enter 1 to continue...\n");
		fflush(stdout);
		scanf("%d",&c);
		}
	while (c==1);
		printf("Program is terminated!\n");
	return 0;
}
