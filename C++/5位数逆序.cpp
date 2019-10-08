#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,d;
	//c=0;
	cin>>a;
	while(a)
	{
		b=a%10;
		a=a/10;
		c=c*10+b;
		cout<<b;
	}
	cout<<c*2<<endl;
	return 0; 
}
