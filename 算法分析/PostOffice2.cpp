#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int  n,sum=0;
	cin>>n;
	int arr[n];
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i]>>arr2[i];
	}
	sort(arr,arr+n);
	sort(arr2,arr2+n);
	for(int i=0;i<n;i++)
	{
		sum+=abs(arr[i]-arr[n/2])+abs(arr2[i]-arr2[n/2]);
	}
	cout<<sum<<endl;
	
}
