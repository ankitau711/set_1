# include<stdio.h>
# include<string.h>
void main()
{
	char a[100];
	int i,l,t;
	printf("Enter the string");
	scanf("%s",a);
	l=strlen(a);
	if(l%2==0)
	{
		for(i=0;i<l;i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	else
	{
		for(i=0;i<l;i+=3)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	
	printf("%s",a);
}
