# include<stdio.h>
void main()
{
	int n,m,i,count,flag=0;
	printf("Enter the range");
	scanf("%d%d",&n,&m);
	if(n>=m)
	printf("invalid input");
	else
	{
	while(n<m)
	{
		for(i=2;i<=n/2;++i)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		++count;
		++n;
	}
	printf("%d",count);
}
}
