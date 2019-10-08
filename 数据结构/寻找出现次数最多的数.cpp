#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<1||n>1000)
	{
		return 0;
	}
	int arr[10000]={0};
	int a;
	int max=0;
	int index=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a<1||a>10000)
		{
			return 0;
		}
		arr[a]++;
	}
	for(int i=0;i<10000;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			index=i;
			
		}
	}
	cout<<index;
}
