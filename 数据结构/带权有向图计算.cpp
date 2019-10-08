#include<iostream>
using namespace std; 
int main()
{
	int n,min=99999999,max=0;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]>max)
			{
				max=arr[i][j];
			}
			if(arr[i][j]<min&&arr[i][j]>0)
			{
				min=arr[i][j];
			}
		}
	}
	cout<<max<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==max)
			{
				cout<<"<"<<i<<" "<<j<<">";
			}
		}
	}
	cout<<endl;
	cout<<min<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==min)
			{
				cout<<"<"<<i<<" "<<j<<">";
			}
		}
		
	}

 } 
