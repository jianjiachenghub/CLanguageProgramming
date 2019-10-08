#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
    int a,b,*c,*d;
    cin>>a>>b;
    c=&a;d=&b;
    if(a<b)swap(c,d); 
    cout<<"The max is:"<<a<<endl;
	return 0;
}

