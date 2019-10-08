#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int  n,x,sum=0;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<=n;i++)
	{
		sum+=arr[i]*pow(2,i);
	}
	cout<<sum<<endl;
}
