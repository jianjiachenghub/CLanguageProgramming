#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for(a=2;a<=1000;a++)
	{
		c=0; 
		for(b=1;b<a;b++)
		{
			if(a%b==0)
			c=c+b;
			
		}
		if(c==a)cout<<c<<endl;
	}
	//cout<<c<<endl;
	return 0; 
}


