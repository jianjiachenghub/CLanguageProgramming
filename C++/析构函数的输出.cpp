#include <iostream>
using namespace std;
class MA
{   public:
      MA(int a,int b)
		 {A=a;B=b;cout<<"���캯��\n";}
	  MA(MA &obj)
		 {A=obj.A+1;B=obj.B+2;cout<<"�������캯��\n";}
	  ~MA()
		 {cout<<A<<"��������\n";}
	  void print()
	  {cout<<"A="<<A<<",B="<<B<<endl; }
   private:
      int A,B;	
};
int main()
{   MA a1(2,3);
    MA a2(a1);
	a2.print();
	MA *pa=new MA(5,6);
	pa->print();
  delete pa;
  }

