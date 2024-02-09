/*
 * functioncalling.c
 *
 *  Created on: Feb 9, 2024
 *      Author: mhaqu
 */


/*
Storage Classes in C:

Calling a Function: A global variable that is private to a function:

 */

#include<stdio.h>

void myfunc();

void myfunc()
{
    static int count=0; // static means its private variable for only this function.
    count=count+1;
    printf("The count is %d \n",count);
}

int main ()
{
    myfunc();
    myfunc();
    myfunc();

    return 0;
}
