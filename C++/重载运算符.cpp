#include<iostream.h>
class complex
{
	public:
		complex(){real=0;imag=0;}
		complex(double r,double i)
        {
        	real=r;imag=i;
        	
		}
		complex operator+(complex &c2)
		{
			return complex(real+c2.real,imag+c2.imag);
	                                       		
		}
	private:
		double real,imag;
}; 
int main()
{
	complex c1(5,4),c2(6,10),c3;
	c3=c1+c2;
	cout<<c3<<endl;	
 } 
