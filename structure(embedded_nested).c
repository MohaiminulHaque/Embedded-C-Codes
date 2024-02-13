//Embedded Nested Structure

#include<stdio.h>

struct Student
{
	int id;
	struct{
		int dd;
		int mm;
		int yyyy;
	}var_Birthday;
}var_Student;

int main()
{
	var_Student.id=48;
	var_Student.var_Birthday.dd=28;
	var_Student.var_Birthday.mm=03;
	var_Student.var_Birthday.yyyy=1995;

	printf("Student ID: %d \n", var_Student.id);
	printf("Student Birthday: Day- %d, Month- %d, Year- %d \n",var_Student.var_Birthday.dd, var_Student.var_Birthday.mm, var_Student.var_Birthday.yyyy );

	return 0;
}
