#include<stdio.h>
void main()
{
	int n,i,p=1;
	printf("Enter the number");
	scanf("%d",&n);
	if(n<0)
	printf("Invalid Input");
	else
	{
		for(i=n;i>=1;i--)
		{
			p=p*i;
		}
		printf("%d",p);
	}
}
