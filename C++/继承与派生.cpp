#include<iostream>
#include<string>
using namespace std; 
class Student
{   int num;
    string name;
    char sex;
 public:                             
   void display( ) 
    {cout<<"num: "<<num<<endl;
     cout<<"name: "<<name<<endl;
     cout<<"sex: "<<sex<<endl; } 
};
class Student1: public Student//?????Student
{private:
      int age;    //????????
      string addr;  //????????
public:
   void display_1( )  //????????
  	 {  
	   	Student::display();	
		cout<<"age: "<<age<<endl; 
   		cout<<"address: "<<addr<<endl;
	}   
};
int main()
{	
	Student1 a;
	a.display_1();
	
}


