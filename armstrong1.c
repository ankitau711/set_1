#include<stdio.h>
#include<math.h>
void main()
{
	int i,temp1,temp2,p,q,n=0,result=0,s;
	printf("Enter the intervals");
	scanf("%d%d",&p,&q);
	if(p<0||q<0)
	printf("Invalid interval");
	else
	{
		for(i=p+1;i<q;i++)
		{
			temp2=i;
			temp1=i;
			while(temp1!=0)
			{
				temp1/=10;
				n++;
			}
			while(temp2!=0)
			{
				s=temp2%10;
				result+=pow(s,n);
				temp2/=10;
			}
			if(result==i)
			printf("%d\t",i);
			n=0;
			result=0;
			
		}
	}
}
