#include<iostream>
using namespace std;
int main()
{
	int a[]={34,91,83,56,29,93,54,12,88,72};
	int i=a[0]; 
	for(int j=0;j<=9;j++)
	{
		if(a[j]<i)
		i=a[j];
	}
	for(int k=0;k<=9;k++)
	{
	if(a[k]==i)cout<<k<<'\n';} 
		
	cout<<i<<" ";
}
