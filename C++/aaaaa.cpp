#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct country
{
	char name[30];
	int last;
	int now;
	int change;
}a[1000],t;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i].name;
	for(i=0;i<n;i++)
		cin>>a[i].last;
	for(i=0;i<n;i++)
		cin>>a[i].now;
	for(i=0;i<n;i++)
		a[i].change=a[i].now-a[i].last;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(a[j].change!=0&&a[j+1].change!=0&&a[j].change<a[j+1].change)
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
			if(a[j].change==a[j+1].change&&strcmp(a[j].name,a[j+1].name)>0)
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
			if(a[j].change==0&&a[j+1].change!=0)
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
		}
	for(i=0;i<n;i++)
		cout<<a[i].change<<" "<<a[i].name<<endl;
	return 0;
}
