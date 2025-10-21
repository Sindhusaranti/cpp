#include<iostream>
using namespace std;
class A          //Base Class
{
	protected:
		A()
		{
			cout<<"Constructor A is invoked"<<endl;
		}
		~A()
		{
			cout<<"Destructor A is invoked"<<endl;
		}
};
class B:public A   //Class B iherits from Base class A
{
	public:
		B()
		{
			cout<<"Constructor B is invoked"<<endl;
		}
		~B()
		{
			cout<<"Destructor B is invoked"<<endl;
		}
};
class C:public A   //Class C inherits from Base class A
{
	public:
		C()
          {
	       cout<<"Constructor C is invoked"<<endl;
         }
         ~C()
         {
         	cout<<"Destructor C is invoked"<<endl;
		 }
};
int main()
{  B b;
   C c;	
}
