//Separable Nested Structure

#include<stdio.h>

struct{
		int dd;
		int mm;
		int yyyy;
	}var_Birthday;

struct Student
{
	int id;
	struct var var1;
}var_Student;

int main()
{
	var_Student.id=48;
	var_Student.var1.dd=28;
	var_Student.var1.mm=03;
	var_Student.var1.yyyy=1995;

	printf("Student ID: %d \n", var_Student.id);
	printf("Student Birthday: Day- %d, Month- %d, Year- %d \n",var_Student.var1.dd, var_Student.var1.mm, var_Student.var1.yyyy );

	return 0;
}


