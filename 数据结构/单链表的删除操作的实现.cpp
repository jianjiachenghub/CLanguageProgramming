#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int c = a-1;
	int arr1[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
	} 
	int b;
	scanf("%d",&b);
	int index=b-1;
	
	int arr2[c];
	if(index<=a&&index>0)
	{

		for(int i=0;i<index-1;i++)
		{
			arr2[i]=arr1[i];
		} 
	
		for(int i=index-1;i<c;i++)
		{
			arr2[i]=arr1[i+1];
		} 
		for(int i=0;i<c-1;i++)
		{
		printf("%d ",arr2[i]);
		} 
		printf("%d\n",arr2[c-1]);
	}
	else
	{
		printf("error!");
	}
	
	 
} 
