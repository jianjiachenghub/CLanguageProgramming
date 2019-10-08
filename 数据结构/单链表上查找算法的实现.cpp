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
	int index=10000;
	for(int i=0;i<a;i++)
	{
		if(arr1[i]==b)
		{
			index = i;
		}
	}
	if(index!=10000)
	{

		printf("ok");
	}
	else
	{

		printf("error");
	}

	 
} 
