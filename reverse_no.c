#include<stdio.h>
int main()
{
	int a,n,s;
	printf("Enter the no");
	scanf("%d",&n);
	if(n<0)
		printf("Invalid number");
	else
	{
	while(n!=0)
	{
		s=n%10;
		a=a*10+s;
		n/=10;
	}
	printf("%d",a);
	}
	return 0;
}
