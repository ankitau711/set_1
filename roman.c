# include<stdio.h>
# include<string.h>
int main(void)
{
	int t=0,n,m,i;
	char letter[20];
	printf("Enter the roman number");
	scanf("%s",letter);
	m=strlen(letter);
	for(i=0;i<m;i++)
	{
		switch(letter[i])
		{
			case 'I': letter[i]=1;
			          break;
			case 'V': letter[i]=5;
			          break;
			case 'X': letter[i]=10;
			          break;
			case 'L': letter[i]=50;
			          break;
			case 'C': letter[i]=100;
			          break;
		}
		
	}
	for(i=0;i<m;i=i+2)
	{
		if(letter[i]<letter[i+1])
		n=letter[i+1]-letter[i];
		else
		n=letter[i+1]+letter[i];
		t=t+n;
	}
	if(t<=20)
	printf("%d",t);
	else
	printf("Number greater than 20");
	return 0;
}

