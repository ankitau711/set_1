# include<stdio.h>
# include<string.h>
void main()
{
	char a[50],b[50];
	int i,l,m,diff=0;
	printf("Enter the two strings");
	scanf("%s%s",a,b);
	l=strlen(a);
	m=strlen(b);
	if(l==m)
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]!=b[i])
			{
				diff=diff+1;
			}
		}
		if(diff==1)
		printf("Yes");
		else
		printf("No");
	}
	else
	printf("invalid input length");
	
}
