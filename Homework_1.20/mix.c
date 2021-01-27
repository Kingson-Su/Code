#include<stdio.h>
int Circulation()
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

int DataManage()
{
        unsigned int input;
//      unsigned int a;
        scanf ("%d",&input);
//      a = input & 128;
//      printf("%d",a);
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
int main()
{
        printf("Pleace enter C/D to Circulation/DataManage\n");
        switch (getchar())
        {
                case 'C': 
			{
				Circulation();
				break;
			}
                case 'D':
			{
				DataManage();
				break;
			}
        }
}
