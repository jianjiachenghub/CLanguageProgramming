#include<iostream>
using namespace std; 
int main()
{
	int n;
	cin>>n;
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
		cout<<x;
		cout<<endl; 
	}
 } 
