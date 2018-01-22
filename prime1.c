# include<stdio.h>
void main()
{
	int p,q,i,flag=0;
	printf("Enter the range");
	scanf("%d%d",&p,&q);
    while(p<q)
    {
    	for(i=2;i<=p/2;i++)
    	{
    		if(p%i==0)
    		{
    			flag=1;
    			break;
			}
		}
		if(flag==0)
		printf("%d",p);
		p++;
	}
}
