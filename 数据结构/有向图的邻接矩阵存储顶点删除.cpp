#include<iostream>
using namespace std; 
int main()
{
	int n,del;
	cin>>n>>del;
	int arr[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<n-1<<endl;
	for(int i=0;i<n;i++)
	{
		if(i!=del)
		{
			if(i!=del)
			{
				cout<<i;
			}


		}

	}		
	cout<<endl; 
	for(int i=0;i<n;i++)
	{
		if(i!=del)
		{
			for(int j=0;j<n;j++)
			{
				if(j!=del)
				{
					cout<<arr[i][j];
				}
			
			}
			cout<<endl; 
		}

	}
 } 
