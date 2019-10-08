#include<iostream>
#include<string.h>
using namespace std;
int n,log[20]={0},d=-1;
int u,end;
int arr[15][15],data[20];
void dfs(int v,int d)
{//初次深度遍历是v01234，第二次是v01243 
	d++;
	log[v]=1;
	data[d]=v;//将遍历顺序存入数组 
	if(end==v)//当出现终点时打出 
	{
		for(int j=0;j<=d;j++)
           cout<<data[j];
        cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[v][i]!=0&&log[i]==0)
		{
			dfs(i,d);
		}
	}
	log[v]=0;//v4结束，反向释放v4 进入v3for循环发现循环结束，在释放v3进入v2，v2下次循环是v4了 

}
int main()
{

	cin>>n>>u>>end;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	dfs(u,d);
}
