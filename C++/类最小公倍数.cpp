#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		A(int x,int y){a=x;b=y;}
		int GBS()
		{
			int c,r;
			if(a<b)
			{c=a;a=b,b=c;}
			while(r=a%b)
			{
				a=b;
				b=r;
			}
			return b;
		}
}; 
int main()
{
	int f,d;
	cin>>f>>d;
	A a1(f,d);
	cout<<a1.GBS()<<endl;
	
}
