#include<stdio.h>
int main()
{
	int num[10];
	for(int i=0;i<10;i++)
	{
		int a=0;
		scanf("%d",&a);
		num[i]=a;
	}
	printf("\n");
	for(int i=9;i>=0;i--)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
