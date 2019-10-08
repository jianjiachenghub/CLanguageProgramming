#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<math.h>//n=e-v+2
using namespace std;
int mp[105][105] = {0},book[105] = {0};
int n,m;
char wa[100];
void dfs(int a)
{
	//if(book[a] == 0) book[a] = 1; 
	
    for(int i = 0;i < n;i++)
    {
    	if(mp[a][i] == 1&&book[i] == 0)
    	{
    		book[i] = 1;
    		cout<<a<<" "<<i<<endl;
    		dfs(i);
		}
	}
    
}
int judge()
{
	for(int i = 0;i < n;i++)
	{
		if(book[i] == 0) return 0;
	}
	return 1;
}
int main()
{
	cin>>n>>m;
	for(int i = 0;i < m;i++) 
	{
		int a,b;
		cin>>a>>b;
		mp[a][b] = 1;
	}
	int flag = 1;
	for(int i = 0;i < n;i++)
	{
		book[i] = 1;
		dfs(i);
		if(judge()) 
		{
			flag = 1;
		}
		else
		{
			flag = 0; 
			break;
		}
		for(int j = 0;j < n;j++) book[j] = 0;
	 } 
	if(flag) cout<<"yes";
	else cout<<"no";
    return 0;
}
