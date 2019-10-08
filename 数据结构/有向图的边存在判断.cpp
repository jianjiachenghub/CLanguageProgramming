#include<iostream>
using namespace std; 
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int x,y;
	cin>>x>>y;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	if(arr[x][y]==1||arr[y][x]==1)
	{
		cout<<"yes";
	}else{
		cout<<"no";
	}
 } 
