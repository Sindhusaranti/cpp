#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
	    public:
		void get()
	    {
	    	cout<<"Enter x value:";
	    	cin>>x;
		}
		friend void sum(Demo &d);
};
void sum(Demo &d)
{
	int y=10;
	cout<<"Addition of x and y is :"<<d.x+y;
}
int main()
{
	Demo d;
	d.get();
	sum(d);
}

