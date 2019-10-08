#include<iostream>
using namespace std;
int main()
{
	int a[]={34,91,83,56,29,93,54,12,88,72};
	int i; 
	for(int j=1;j<=9;j++)
	{
		for(int i=0;i<10-j;i++)
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
