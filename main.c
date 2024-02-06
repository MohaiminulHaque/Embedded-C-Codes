/******************************************************************************
Example
1) Create a char type variable and initialize it to value 100
2) Print the address of the above variable.
3) Create a pointer variable and store the address of the above variable
4) Perform read operation on the pointer variable to fetch 1 byte of data from the pointer
5) Print the data obtained from the read operation on the pointer.
6) Perform write operation on the pointer to store the value 65
7) Print the value of the variable defined in step 1

*******************************************************************************/
#include <stdio.h>

int main()
{
    char variable=100; //1
    printf("The address of the variable is %x \n", &variable); //2
    char *pointervariable; //3
    pointervariable= &variable; //4
    char value= *pointervariable;
    printf("The value of the variable is %d \n", value); //5

    *pointervariable=65; //6
    printf("The new value of the variable is %d", variable); //7
    return 0;
}
