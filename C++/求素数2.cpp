#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m,r;
	cin>>m;
	int i; 
	for(i=2;i<=sqrt(m);i++)
	{
		if(m%i==0)
		break;
	}
	if(i>sqrt(m))cout<<"NO"<<endl;
	else
	cout<<i<<endl;
	
	return 0; 
}


