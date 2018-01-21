# include<stdio.h>
void main()
{
	int n,s,a,t;
	printf("Enter the no");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		s=n%10;
		a=a*10+s;
		n/=10;
	}
	if(t==a)
	printf("no is palindrome");
	else
	printf("no is not palindrome");
}
