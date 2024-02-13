#include<stdio.h>

struct data
{
	char Data1;
	int Data2;
	short Data3;
}varData;

void DisplayElements(struct data varData)
{
	int Data4;
	//WriteData
	varData.Data1=0x22; //for writing, this arrow operator is used.
	//ReadData
	Data4= varData.Data1;
	printf("stored value in data1: %x\n", varData.Data1);
	printf("stored value in data1: %x\n", Data4);
}

int main ()
{
	varData.Data1=0x11;
	varData.Data2=0xaaaaffff;
	varData.Data3=0xabcd;
	printf("stored value in data1: %x\n", varData.Data1);
	DisplayElements(varData);
	return 0;
}
