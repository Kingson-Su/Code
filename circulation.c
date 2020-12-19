#include<stdio.h>
int main()
{
	for(int a=15;a<=95;a+=10)
	{
		for(int b=15;b<=a;b+=10)
		{
			printf("%d*%d=%d ",b,a,b*a);
		}
		printf("\n");
	}
	return 0;
}
