#include<iostream>
#include<string.h>
using namespace std;
int find(char arr[],int len,char x)
{
	for(int i=0;i<len;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
}
int main()
{
	char arr[100];
	cin>>arr;
	int len = strlen(arr);
	char x;
	cin>>x;
	int index = find(arr,len,x);
	if(index==0)
	{
		cout<<"#";
	}else{
		cout<<arr[index-1];
	}
	
}
