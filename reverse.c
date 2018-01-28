#include<stdio.h>
int main()
{
	char a[1000],b[1000];
	int start,end,count=0;
	printf("Enter the string");
	scanf("%s",&a);
	while(a[count]!=0)
	count++;
	end=count-1;
	for(start=0;start<count;start++)
	{
		b[start]=a[end];
		end--;
	}
	printf("%s",b);
	return 0;
}
