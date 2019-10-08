#include<iostream>
#include<string.h>
using namespace std;
int n,log[20]={0};
char s[100],start,index1;
int arr[15][15];
void dfs(int v)
{
	cout<<s[v];
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

	cin>>n>>s;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	cin>>start;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==start)
		{
			index1=i;
		}
	}
	dfs(index1);
}
