#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<1;i++)
	{
		for(int k=0;k<n-i-1;k++)
		{
			if(arr[k]>arr[k+1])
			{
				int temp = arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	for(int i1=0;i1<n;i1++)
	{
		cout<<arr[i1]<<" ";
	}

	}
	
}
