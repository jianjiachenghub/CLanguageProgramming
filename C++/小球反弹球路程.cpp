#include<iostream>
using namespace std;
int main()
{
	float lucheng(100),gao(100);
	int i=0;
	while(gao>0.02)
	{
		gao=gao/2;
		lucheng=lucheng+gao*2;
		i++	;}
	cout<<lucheng<<'\t'<<i<<endl;
	return 0; 
}


