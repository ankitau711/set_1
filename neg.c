#include<stdio.h>
int main()
{
	int n;
	printf("enter the number to check no is positive or negative");
	scanf("%d",&n);
	if(n>0)
	{
		printf(" no is poitive %d",n);
	}
	else if(n<0)
	{
		printf("no is negative %d",n);
	}
	else
	{
		printf("no is zero");
	}
}
