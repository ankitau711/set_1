# include<stdio.h>
void main()
{
	int N,i,sum=0;
	printf("Enter the limit");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
}
