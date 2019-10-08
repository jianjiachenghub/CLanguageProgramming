#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n]={0},temp;
	float sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int k=0;k<n-1-i;k++)
		{
			if(arr[k]>arr[k+1])
			{
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}		
		}	
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<=i;k++)
		{
			sum+=arr[k];
		}
	}
	
	sum=sum/n; 
	printf("%.2f\n",sum);
}
