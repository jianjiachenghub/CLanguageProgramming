#include<iostream>
using namespace std; 
inline double S(double r)
{
	double s;
	double PI=3.14125;
	s=PI*r*r;
	return s;		
}
int main()
{
	double a;
	cin>>a;
	S(a);
	cout<<S(a)<<endl;
	return 0;
}
