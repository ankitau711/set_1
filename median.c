#include<stdio.h>
#define MAX_SIZE 100
void main()
{
	int n,i,j,temp,arr[MAX_SIZE];
	int median;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=1;i<=n;i++)
	scanf("%d",&arr[i]);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	if(n%2==0)
	median=(arr[n/2]+arr[n/2+1])/2.0;
	else
	median=arr[n/2+1];
	printf("Median:%d",median);
}
	
