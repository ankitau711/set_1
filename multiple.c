#include<stdio.h>
void main()
{
	int n,s,i;
	printf("Enter the number");
	scanf("%d",&n);
	if(n<0)
	printf("Invalid Input");
	else
	{
		for(i=1;i<=5;i++)
		{
			s=n*i;
			printf("%d\t",s);
		}
	}
}
