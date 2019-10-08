#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	char arr[100];
	int index;
	cin>>arr;
	int n=strlen(arr); 
	if(arr[n-1]!='#')
	{
		cout<<"no!";
		return 0;
	}
	for(int i=0;i<strlen(arr);i++)
	{
		if(arr[i]=='@')
		{
			index=i;
		}
	}
	for(int j=0;j<index;j++)
	{
		if(arr[j]!=arr[n-2-j])
		{
			cout<<"no!";
		return 0;
		}
		
	}
	cout<<"yes!";
}
