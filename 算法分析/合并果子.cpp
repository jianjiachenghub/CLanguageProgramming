#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<1||n>10000)
	{
		return 0;
	}
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<1||arr[i]>20000)
		{
			return 0;
		}
	}
	sort(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
		count=count+arr[i]+arr[i+1];
		arr[i+1]=arr[i]+arr[i+1];
		sort(arr+i+1,arr+n);
	}
	cout<<count;
 } 
