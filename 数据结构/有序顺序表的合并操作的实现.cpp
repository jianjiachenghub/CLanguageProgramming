#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	scanf("%d",&a);
	int arr1[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
	} 
	int b;
	scanf("%d",&b);
	int arr2[b];
	for(int i=0;i<b;i++)
	{
		scanf("%d",&arr2[i]);
	} 
	int c=a+b;
	int arr3[c];
	for(int i=0;i<a;i++)
	{
		arr3[i]=arr1[i];
	}
	for(int i=a;i<c;i++)
	{
		arr3[i]=arr2[i-a];
	}
	sort(arr3,arr3+c);
	for(int i=0;i<c-1;i++)
	{
		printf("%d ",arr3[i]);
	}
	printf("%d\n",arr3[c-1]);
} 
