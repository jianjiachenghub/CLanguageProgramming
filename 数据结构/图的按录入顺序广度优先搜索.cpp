#include<iostream>
#include<string.h>
#include<queue>
using namespace std;
int arr[100][100],log[20]={0};	
int n,v;
char s[100],x;
void dfs(int v)
{
	queue<int>q;
	q.push(v);
	log[v]=1;//�Ѷӵĵ�һ����Ϊ1���Ժ���һ������һ��1��ȷ�����б���������ظ��Ķ��� 
	while(!q.empty())
	{
		int top=q.front();
		cout<<s[top];
		q.pop();
			for(int i=0;i<n;i++)
			{
				if(arr[top][i]!=0&&log[i]==0)
				{
					q.push(i);
					log[i]=1;
				}
			}

	}
	
}
int main()
{
	cin>>n;
	cin>>s;
	int l=strlen(s);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cin>>x;
	for(int i=0;i<l;i++)
	{
		if(x==s[i])
		{
			v=i;	
		}
	}
	//cout<<v;
	dfs(v);
 } 
