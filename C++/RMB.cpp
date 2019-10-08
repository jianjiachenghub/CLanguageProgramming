#include<iostream>
using namespace std;
class RMB
{
	private:
		int yuan,jiao,fen;
	public:
		RMB(int a=0,int b=0,int c=0)
		{
			yuan=a;jiao=b;fen=c;
			count++;	
		}
		RMB(double d)
		{
			int c;c=d*100;
			yuan=c/100;jiao=(c-100*yuan)/10;fen=c%10;
			count++;	
		}
		RMB(RMB &R);
		void exchange()
		{cout<<yuan<<"元"<<jiao<<"角"<<fen<<"分"<<endl; }
		static int count;
		static int getcount(){return count;}
		RMB operator+(RMB &m);		
};
int RMB::count=0;
RMB::RMB(RMB &R)
{
	yuan=R.yuan;jiao=R.jiao;fen=R.fen;
	count++;
}
RMB RMB::operator+(RMB &m)
{
	RMB M;
	M.yuan=m.yuan+yuan;
	M.jiao=m.jiao+jiao;
	M.fen=m.fen+fen;
	return M;
}
int main()
{
	RMB rmb(1.25),rmb2(5,2,1),rmb4;
	rmb.exchange();
	rmb2.exchange();
	cout<<"拷贝rmb="; 
	RMB rmb1(rmb);
	rmb1.exchange();
	rmb4=rmb+rmb2;
	cout<<"类的总数="<<RMB::getcount()<<endl;
	cout<<"rmb+rmb2=";
	rmb4.exchange();
}

