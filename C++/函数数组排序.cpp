#include<iostream>
using namespace std;
int px(int a[],int n);
int main()
{
	//int px(int a[],int n);
	int a[]={34,91,83,56,29,93,54,12,88,72};
	px(a,10);
}
int px(int a[],int n)
{
	int i; 
	for(int j=1;j<=n-1;j++)
	{
		for(int i=0;i<n-j;i++)
		if(a[i]<a[i+1])
		{
			int b;
			b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
		}
		
	}
	cout<<"?????"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";}
}
