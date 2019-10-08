#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	scanf("%d",&a);
	int c = a+1;
	int arr1[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
	} 
	int b;
	scanf("%d",&b);
	int d;
	scanf("%d",&d);
	int index=10000;
	for(int i=0;i<a;i++)
	{
		if(arr1[i]==b)
		{
			index = i;
		}
	}
	int arr2[c];
	if(index!=10000)
	{

		for(int i=0;i<index;i++)
		{
			arr2[i]=arr1[i];
		} 
		arr2[index]=d;
		for(int i=index+1;i<c;i++)
		{
			arr2[i]=arr1[i-1];
		} 
	}
	else
	{

		for(int i=0;i<c-1;i++)
		{
			arr2[i]=arr1[i];
		}
		arr2[c-1]=d; 
	}
	for(int i=0;i<c-1;i++)
		{
		printf("%d ",arr2[i]);
		} 
		printf("%d\n",arr2[c-1]);
	 
} 
