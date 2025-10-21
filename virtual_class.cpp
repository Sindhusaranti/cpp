#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void show()    // virtual function  
		{
			cout<<"show() of the base class"<<endl;
		}
};
class Derived: public Base
{
	public :
		void show()
		{
			cout<<"show() of derived class"<<endl;
		}
};
int main()
{
	Base *bptr , b;  // base class pointer  
	Derived d;
	bptr=&b;
	bptr->show();
	bptr=&d;
	bptr->show();
}
