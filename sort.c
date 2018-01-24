#include<stdio.h>
#define MAX_SIZE 100
void main()
{
	int n,i,j,temp,arr[MAX_SIZE];
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("The sorted array:");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
