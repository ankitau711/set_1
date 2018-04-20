# include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,j,m,n,u,v,w,x,y,z,flag=0;
	printf("Enter the strings");
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=i+1;j<n;j++)
			{
				u=a[i];
				v=a[j];
				w=b[i];
				x=b[j];
				y=u-v;
				z=w-x;
				if(y==z)
				flag=1;
				else
				break;
			}
		}
		if(flag==1)
		printf("isomorphic");
		else 
		printf("not isomorphic");
		
	}
	else
	printf("not isomorphic");
}
