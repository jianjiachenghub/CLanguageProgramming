#include <iostream>
using namespace std;
class Point
{public:
	Point(int xx=0, int yy=0)
		{X=xx; Y=yy;cout<<"构造函数被调用"<<++countP<<endl;}
    Point(Point &p){X=p.X;	Y=p.Y;cout<<"拷贝构造函数被调用"<<++countP<<endl;}

	int GetX() {return X;}
	int GetY() {return Y;}
	static void GetC()
		{cout<<" Object id="<<countP<<endl;}
	~Point(){cout<<"析构函数被调用"<<countP--;}
private:
	int X,Y;
	static int countP;
};
int Point::countP=0;
int main()
{	Point::GetC();
    Point A(4,5);
	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
	A.GetC();
	Point B(A);
	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
	B.GetC();
	Point *p;
	p=new Point(5,5);
	p->GetC();
	cout<<p->GetX()<<p->GetY()<<endl;
	delete p;
	Point::GetC();
	return 0;
}

