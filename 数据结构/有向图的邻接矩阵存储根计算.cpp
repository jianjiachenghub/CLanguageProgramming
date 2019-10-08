#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int log[20]={0};
int n;
int arr[30][30];
void dfs(int v)
{
	log[v]=1;
	for(int i=0;i<n;i++)
	{
		if(arr[v][i]!=0&&log[i]==0)
		{
			dfs(i);
		}
	}

}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
        memset(log,0,sizeof(log));
		dfs(i);
		int j;
		for(j=0;j<n;j++)
		{
			if(log[j]==0)
			break;
		}
		if(j==n)cout<<i;
	}
	
}
