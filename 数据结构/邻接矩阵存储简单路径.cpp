#include<iostream>
#include<string.h>
using namespace std;
int n,log[20]={0},d=-1;
int u,end;
int arr[15][15],data[20];
void dfs(int v,int d)
{//������ȱ�����v01234���ڶ�����v01243 
	d++;
	log[v]=1;
	data[d]=v;//������˳��������� 
	if(end==v)//�������յ�ʱ��� 
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
	log[v]=0;//v4�����������ͷ�v4 ����v3forѭ������ѭ�����������ͷ�v3����v2��v2�´�ѭ����v4�� 

}
int main()
{

	cin>>n>>u>>end;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	dfs(u,d);
}
