#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int flag=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int n2;
	cin>>n2;
	for(int i=0;i<n;i++)
 {

		if(arr[i]==n2){
			continue;
		}
		flag=1;
		cout<<arr[i]<<" ";
	}
	if(flag==0)cout<<-1;
	
	
}

