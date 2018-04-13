#include<stdio.h>
int main()
{
	char s[100000];
	int count;
	printf("Enter the string");
	scanf("%s",s);
	while(s[count]!=0)
		count++;
	s[count]='.';
	printf("%s",s);	
	
}
