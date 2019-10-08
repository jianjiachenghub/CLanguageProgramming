#include<iostream>
using namespace std;
int main()
{	
	int a[]={34,91,83,56,29,93,54,12,88,72};
	int i,c,b,d,sum(0);
	float f;
	for(i=0;i<=9;i++)
	{sum=sum+a[i];}
	f=float(sum)/10.0;
	cout<<f<<endl;
	for(b=0;b<=9;b++)
	{
		if(a[b]<a[b+1])
		{
			c=a[b];
			a[b]=a[b+1];
			a[b+1]=c;
		}
	}
	cout<<"???="<<c<<endl;
	for(d=0;d<=9;d++)
	{
		if(a[d]==c)cout<<d;
	}
	return 0;
}
