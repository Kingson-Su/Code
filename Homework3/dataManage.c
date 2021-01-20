#include<stdio.h>
int main()
{
	unsigned int input;
//	unsigned int a;
	scanf ("%d",&input);
//	a = input & 128;
//	printf("%d",a);
	if((input & 128) == 128)
	{
		printf("girl ");
	}
	else
	{
		printf("man ");
	}
	input &= 127;
	printf("%d\n",input);
	input = 0;
	return 0;
}
