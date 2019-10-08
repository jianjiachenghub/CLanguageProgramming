#include<iostream>
using namespace std; 
int main()
{
	int n,max=0;
	cin>>n;
	int arr[n][n];
	int arrv[n]={0};
	
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
		arrv[i]=x;
		if(max<arrv[i])
		{
			max=arrv[i];
		}
	}
	cout<<max<<endl;
	for(int i=0;i<n;i++)
	{
		if(arrv[i]==max)
		{
			cout<<i;
		}
	}
 } 
