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
		friend RMB operator+(RMB &m,RMB &m2);
		RMB operator++();		
};
int RMB::count=0;
RMB::RMB(RMB &R)
{
	yuan=R.yuan;jiao=R.jiao;fen=R.fen;
	count++;
}
RMB operator+(RMB &m,RMB &m2)
{
	RMB M; 
	M.fen=m.fen+m2.fen;
	M.jiao=m.jiao+m2.jiao;
	M.yuan=m.yuan+m2.yuan;
	if(M.fen>=10)
	{M.jiao=M.jiao+1;M.fen=M.fen-10;}
	//M.jiao=m.jiao+m2.jiao;
	if(M.jiao>=10)
	{M.yuan=M.yuan+1;M.jiao=M.jiao-10;}
	//M.yuan=m.yuan+m2.yuan;
	return M;
	
}
RMB RMB::operator++()
{
	fen++;
	if(fen==10)
	{
		fen=0;
		jiao++;
	if(jiao==10)
	{
		jiao=0;
		yuan++;
	}
	}
	return *this;
}
int main()
{
	RMB rmb(7.95),rmb2(5,2,9),rmb4;
	rmb.exchange();
	rmb2.exchange();
	cout<<"拷贝rmb="; 
	RMB rmb1(rmb);
	rmb1.exchange();
	rmb4=rmb+rmb2;
	cout<<"类的总数="<<RMB::getcount()<<endl;
	cout<<"rmb+rmb2=";
	rmb4.exchange();
	for(int i=0;i<20;i++)
	{
		++rmb;
		rmb.exchange();
	}
	
}
