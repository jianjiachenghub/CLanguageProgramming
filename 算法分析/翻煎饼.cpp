#include<iostream>
#include<algorithm>
using namespace std;
int find(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
}
void change(int arr[],int index)
{
	int temp;
	for(int i=0;i<(index+1)/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[index-i];
		arr[index-i]=temp;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int arr2[n];
	int index,count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arr2[i]=arr[i];
	}
	sort(arr2,arr2+n);
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]!=arr2[i])
		{
			index=find(arr,n,arr2[i]);
			if(index!=0)
			{
				change(arr,index);
				count++;
			}
			change(arr,i);
			count++;
		}
	}
	cout<<count<<endl;
	
 } 
