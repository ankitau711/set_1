# include<stdio.h>
# include<string.h>
void main()
{
	char a[100];
	int i,l,t,count=0;
	printf("Enter the string");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	count++;
	
	a[0]=toupper(a[0]);
	for(i=1;i<count;i++)
	{
		if(a[i]==' ')
		a[i+1]=toupper(a[i+1]);
	}
	printf("%s",a);
}
