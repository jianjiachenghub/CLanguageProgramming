#include<iostream>
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
	for(int i=1;i<=1;i++)
	{
		int current=arr[i];
		for(int j=i-1;j>=0;j--)
		{
			if(arr[j]>current)
			{
				int temp;
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
					for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		}
	}
} 
