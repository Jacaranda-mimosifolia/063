#include<stdio.h>
#define z 7
int main()
{
	for(int i=1;i<=z;i++)
	{
		for(int i1=1;i1<=z-i;i1++)
		{
			printf(" ");
		}
		for(int i2=1;i2<=i;i2++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	printf("\n\n");
	for(int i=1;i<=z;i++)
	{
		for(int i1=1;i1<=z-i;i1++)
		{
			printf(" ");
		}
		for(int i2=1;i2<=i;i2++)
		{
			printf("*");	
		}
		for(int i3=1;i3<=(i-1);i3++)
			{
				printf("*");
			}
		printf("\n");
	}
	
	printf("\n\n");
	for(int i=1;i<=z;i++)
	{
		for(int i1=1;i1<=(i-1);i1++)
		{
			printf(" ");
		}
		for(int i2=0;i2<=(z-i);i2++)
		{
			printf("*");
		}
		for(int i3=1;i3<=(z-i);i3++)
			{
				printf("*");
			}
		printf("\n");
	}
	return 0;
}
