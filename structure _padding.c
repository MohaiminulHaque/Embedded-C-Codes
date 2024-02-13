/*
 * structure _padding.c
 *
 *  Created on: Feb 10, 2024
 *      Author: mhaqu
 */
#include <stdio.h>
#include<stdint.h>

struct Dataset
{
	char data1;
	int data2;
	short data3;
}__attribute__((packed)); /*padding will happen due to this line and memory space will be saved due
to packed data structures. However, it is better to use unpacked data as program memory is increased due to padding.
*/

int main()
{
	struct Dataset data;
	data.data1=0x11;
	data.data2=0xaaaaffff;
	data.data3=0xabcd;

	uint8_t *ptr;
	ptr=(uint8_t*)&data;
	uint32_t sizeofdata =sizeof(data);
	printf("Memory address content \n");

	for(uint32_t i=0; i<sizeofdata; i++)
	{
		printf("%p %x\n", ptr, *ptr);
		ptr++;
	}

	printf("size struct variable is: %u \n", sizeof(data));
	return 0;
}
