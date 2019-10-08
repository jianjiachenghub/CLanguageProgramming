#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<n2;i++)
	{
		int flag=1;
		for(int k=0;k<n;k++)
		{
			if(arr2[i]==arr[k])flag=0;
		
		}
		if(flag==1)
		{
		cout<<arr2[i]<<" ";
			
		}
	}
	
	
}
