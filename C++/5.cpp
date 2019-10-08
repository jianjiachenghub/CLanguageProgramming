#include <iostream>
using namespace std;
class A {
int a;
public:
A(int aa=0){a=aa;}
~A(){cout <<"Destructor A!"<<a<<endl;}
};
class B:public A{
int b;
public:
B(int aa=0,int bb=0):A(aa){b = bb;}
~B(){cout <<"Destructor B!"<< b << endl;}
};
int main(){
B x(5),y(6,7);
}

