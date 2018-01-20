# include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter the integer");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("%d",count);
	
}
