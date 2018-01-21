# include<stdio.h>
void main()
{
	int i,x,n,p;
	printf("Enter the base and exponent");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		p=p*x;
	}
	printf("result=%d",p);
}
