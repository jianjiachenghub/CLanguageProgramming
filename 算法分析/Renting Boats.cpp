#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include<stack>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define INF 9999999
int mp[205][205];
int vis[205];
int dis[205];
int n;
 
void init()
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			mp[i][j] = INF;
		}
	}
	memset(vis, 0, sizeof(vis));
}
 
void dj(int ss)
{
	for (int i = 1; i <= n; i++)
	{
		dis[i] = mp[ss][i];
	}
	vis[ss] = 1;
	for (int i = 2; i <= n; i++)
	{
		int _max = INF;
		int _maxid = -1;
		for (int j = 1; j <= n; j++)//找出最小的点
		{
			if (_max > dis[j] && !vis[j])
			{
				_max = dis[_maxid=j];
			}
		}
		vis[_maxid] = 1;
		for (int j = 1; j <= n; j++)//通过这个点缩短其他点的距离
		{
			if (!vis[j] && dis[j] > dis[_maxid] + mp[_maxid][j])
			{
				dis[j] = dis[_maxid] + mp[_maxid][j];
			}
		}
	}
}
 
int main()
{
	while (cin >> n)
	{
		init();
		for (int i = 1; i <= n - 1; i++)//转化为图再计算
		{
			for (int j = i + 1; j <= n; j++)
			{
				scanf("%d", &mp[i][j]);
			}
		}
		dj(1);
		cout << dis[n] << endl;
 
	}
	return 0;
}
