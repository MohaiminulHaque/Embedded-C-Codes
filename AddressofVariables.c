/*
How to create/Finding the address of a variable:
How to store the address of a variable into another variable by type casting:
*/
#include<stdio.h>

int a=5;

int main ()
{
    unsigned long int addressofA = (unsigned long int)&a; //this is called type casting
    printf ("address of a is %p \n", &a);
    printf ("address of a is %ld \n", addressofA);
    return 0;

}
