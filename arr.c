# include<stdio.h>
void main()
{
	int N,K,i,j,sum=0;
	printf("Enter N and K ");
	scanf("%d%d",&N,&K);
	printf("Enter the array");
	for(i=1;i<=N;i++)
	{
		scanf("%d",&i);
	}
	
	
		for(i=1;i<=K;i++)
		{
			sum+=i;
		}
	
	printf("Sum:%d",sum);
}
