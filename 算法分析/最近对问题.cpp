#include <iostream>
#include <algorithm>
#include <cmath>
#include<stdio.h> 
using namespace std;
int main()
{
	int n;
	int x[100001], y[100001];
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> x[i] >> y[i];
		}
		int MinDistence = 999999999;
		for (int i = 0; i < m; i++)
		{
			for (int j = i + 1; j < m; j++)
			{
				MinDistence = min(MinDistence, (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
			}
		}
		double minm = sqrt(MinDistence);
		printf("%.4f\n",minm);
	}
    return 0;
}


