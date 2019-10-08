#include<iostream>
using namespace std;
int main()
{
	int a(0),b(2),sum(0),d;
	for(int i=1;i<=7;i++)
	{
		a=b+10*a;
		sum+=a;
	}
	cout<<a<<endl<<sum;
	return 0; 
}
