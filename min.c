#include<stdio.h>
#define MAX_SIZE 100
void main()
{
	int min,n,i,arr[MAX_SIZE];
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	printf("%d",min);
}
