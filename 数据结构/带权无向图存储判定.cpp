#include<iostream>
using namespace std; 
int main()
{
	int n,flag=1;
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
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]!=arr[j][i])
			{
				flag=0;
			}
		}
	}
	if(flag==1)
	{
		cout<<"yes";
	}else{
		cout<<"no";
	}

 } 
