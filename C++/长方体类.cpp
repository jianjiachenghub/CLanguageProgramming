#include<iostream>
using namespace std;
class Rectangle
{
	public:
		Rectangle(double a,double b){chang=a;kuan=b;}
		double chang;
		double kuan;
		
};
class Box:public Rectangle
{
	public:
		Box(double a,double b,double c):Rectangle(a,b)
		{
			gao=c;
		}
		double T()
		{
			return chang*kuan*gao;
		}
		double S()
		{
			return chang*kuan*2+chang*gao*2+kuan*gao*2;
		}
	private:
		double gao;
		
};
int main()
{
	Box box1(1.0,2.0,3.0);
	cout<<"T="<<box1.T()<<endl;
	cout<<"S="<<box1.S()<<endl;
}
