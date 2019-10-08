#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arrf[n]={0};
	int count=0;
	for(int i=0;i<n;i++)
	{
			char arr[100];
			char arr2[100];
			cin>>arr;
			cin>>arr2;
			sort(arr,arr+strlen(arr));
			sort(arr2,arr2+strlen(arr2));
			if(strcmp(arr,arr2)==0){
				arrf[count]=1;
				count++;
			}else{
				count++;
			}
	}
	for(int i=0;i<n;i++)
	{
		if(arrf[i]==1)
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}

	
	
}
