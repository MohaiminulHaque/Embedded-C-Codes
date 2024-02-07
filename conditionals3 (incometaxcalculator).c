/*
Write a program based on if else-if statement for calculating
income tax. Upto 14000 euros per year it's free of tax.
From 14001 to 15500, tax rate is 0.5%.
From 15501 to 17000, tax rate is 1%.
From 17001 to 18000, tax rate is 2%.
From 18801 to 19000, tax rate is 4%.
From 19001 to 20000, tax rate is 5%.
More than 20001, it is 20%+1000 euro.
 */

#include<stdio.h>
int main()
{
	float income, tax;
	printf("Share your yearly income below: \n");
	fflush(stdout);
	scanf("%f", &income);

	if(income<=14000)
	{
		tax=0;
	}
	else if ((income>=14001)&&(income<=15000))
	{
		tax=income*0.005;
	}
	else if ((income>=15001)&&(income<=16000))
	{
		tax=income*0.01;
	}
	else if ((income>=16001)&&(income<=17000))
	{
		tax=income*0.02;
	}
	else if ((income>=17001)&&(income<=18000))
	{
		tax=income*0.03;
	}
	else if ((income>=18001)&&(income<=19000))
	{
		tax=income*0.04;
	}
	else if ((income>=19001)&&(income<=20000))
	{
		tax=income*0.05;
	}
	else if (income>=20001)
	{
		tax=(income*0.2)+1000;
	}
	printf("Taxable income is %f", tax);
	return 0;
}
