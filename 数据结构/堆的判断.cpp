#include<iostream>
using namespace std;
int main()
{
	int n,flag=1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int index=(n-1-1)/2;
	for(int i=0;i<=index;i++)
	{
		if(2*i+2<=n-1){
			if(arr[i]<=arr[2*i+1]&&arr[i]<=arr[2*i+2])
			{
				continue;
			}else{
				flag=0;
				break;
			}
		}else{
			if(arr[i]<=arr[2*i+1])
			{
				continue;
			}else{
				flag=0;
				break;
			}
		}

	}
	if(flag==1){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
 } 
