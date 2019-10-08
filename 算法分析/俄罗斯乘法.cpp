#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int sum=0; 
	cin>>x;
	cin>>y;
	while(x/2>=1)
	{
		if(x%2!=0)
		{
			sum+=y;
			cout<<y<<" + ";
		}
		x=x/2;
		y=y*2;
	}
	cout<<y<<" = "<<y+sum<<endl;
	
}
