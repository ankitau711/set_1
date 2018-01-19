#include<stdio.h>
void main()
{
	char n;
	printf("Enter a character");
	scanf("%c",&n);
	if(n=='a'|| n=='e'|| n=='i'|| n=='o'|| n=='u')
	printf("Character is Vowel");
	else
	printf("Character is Consonant");
}
