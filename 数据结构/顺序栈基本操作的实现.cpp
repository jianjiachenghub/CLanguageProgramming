#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[2000];
	for(int i;i<n;i++)
	{
		cin>>arr[i];
	}
	int u;
	cin>>u;
	if(n<=u){
		cout<<"-1";
	}else{
		cout<<arr[n-u-1];
	}
	
}


