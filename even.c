# include<stdio.h>
void main()
{
	int p,q,i;
	printf("Enter the range");
	scanf("%d%d",&p,&q);
	for(i=p+1;i<q;i++)
	{
		if(i%2==0)
		printf("%d\t",i);
	}
}
