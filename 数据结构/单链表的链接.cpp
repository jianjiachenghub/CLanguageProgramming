#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	getchar(); 
	char arr1[a];
	for(int i=0;i<a;i++)
	{
		scanf("%c",&arr1[i]);
		getchar(); 
	} 
	int b;
	scanf("%d",&b);
	getchar(); 
	char arr2[b];
	for(int i=0;i<b;i++)
	{ 
		scanf("%c",&arr2[i]);
		getchar(); 
	} 
	int c=a+b;
	char arr3[c];
	for(int i=0;i<a;i++)
	{
		arr3[i]=arr1[i];
	}
	
	for(int i=a;i<c;i++)
	{
		arr3[i]=arr2[i-a];
	}
	
	for(int i=0;i<c-1;i++)
	{
		printf("%c ",arr3[i]);
	}
	printf("%c\n",arr3[c-1]);
} 
