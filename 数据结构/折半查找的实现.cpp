#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],low=0,high=n-1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];	
	}	
	int x,mid,flag=0,count=0;
	cin>>x;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(arr[mid]>x)
		{
			high=mid-1;
		}
		if(arr[mid]<x)
		{
			low=mid+1;
		}
		if(arr[mid]==x){
			flag=1;
			break;
		}
		count++;	
	}
	if(flag==1)
	{
		cout<<mid<<endl;
		cout<<count;
	}else{
			cout<<-1<<endl;
		cout<<count;
	}

} 
