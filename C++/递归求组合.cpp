#include<iostream>
using namespace std; 
int J(int n)
{
	int j;
	if(n==1)j=1;
	else j=J(n-1)*n;
	return j;		
}
void C(int a,int b)
{
	int c;
	c=J(a)/(J(b)*J(a-b));
	cout<<c<<endl;	
}
int main()
{
	int a,b;
	cin>>a>>b;
	if(a>=1&&a>b)
	C(a,b);
	else cout<<"Input Invalid !"<<endl;
	return 0;
}
