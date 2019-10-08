#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,x,sum=0,y=1;
	cin>>n>>x;
	int arrx[n];

	for(int i=0;i<=n;i++)
	{
		cin>>arrx[i];
	}
	y=arrx[n]*x+arrx[n-1];
	for(int i=n-1;i>=1;i--)
	{
		y=y*x+arrx[i-1];
	}
	cout<<y<<endl;
} 
