#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for(b=2;b<=1000;b++)
	{
		c=0;
		for(a=1;a<b;a++)
		{if(b%a==0)c=c+a;}
		if(c==b)cout<<b<<"   its factors are "<<endl;
	}
	return 0;
}
