#include<iostream>
using namespace std; 
int main()
{
	int n,k,sum=0;
	cin>>n>>k;
	int arr[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		int x=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1)
			{
				x++;
			}
		}
		if(x==k)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
		for(int i=0;i<n;i++)
	{
		int x=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1)
			{
				x++;
			}
		}
		if(x==k)
		{
			cout<<i;
		}
	}
 } 
