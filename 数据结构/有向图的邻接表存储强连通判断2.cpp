#include<iostream>
using namespace std; 
int main()
{
	int n,e;
	cin>>n>>e;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;

		}
	}
	for(int i=0;i<e;i++)
	{
		int x,y;
		cin>>x>>y;
		arr[x][y]=1;
	}
	

	
	int flag = 0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i][i+1]!=1)
		{
			flag = 1;
			break;
		}
	} 
	
	if(flag == 1 || arr[n-1][0]!=1) cout<<"no";
	else cout<<"yes";	


 } 
