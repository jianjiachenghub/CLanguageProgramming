#include<iostream>
using namespace std; 
int main()
{
	int v,e,max=0;
	cin>>v>>e;
	int arr[v]={0};
	for(int i=0;i<e;i++)
	{
		int x,y;
		cin>>x>>y;
		arr[x]++;
	}
	


		for(int j=0;j<v;j++)
		{
				if(max<arr[j]) 
				{
					max=arr[j];
				}

		}
				cout<<max;
				cout<<endl; 
		for(int j=0;j<v;j++)
		{
				if(arr[j]==max) 
				{
					cout<<j;
				}

		}
 } 
