# include<stdio.h>
void main()
{
	int n,s,a,t;
	printf("Enter the no");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		s=t%10;
		a+=s*s*s;
		t/=10;
	}
	if(a==n)
	printf("no is palindrome");
	else
	printf("no is not palindrome");
}
