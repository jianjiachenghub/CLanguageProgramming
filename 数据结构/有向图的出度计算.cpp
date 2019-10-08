#include<iostream>
using namespace std; 
int main()
{
	int v,e;
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
 
				cout<<arr[j];
				cout<<endl; 
		}
	
	
 } 
