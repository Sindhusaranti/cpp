#include<iostream>
using namespace std;
class preincrement
{
	private:
		int x;
		int y;
		int z;
	public:
		void get()
		{
			x=12;
			y=2;
			z=30;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z;
		}
		void operator ++()
		{
		    ++x;
			++y;
			++z;
		}
};
int main()
{
	preincrement p;
	p.get();
	++p; //p.operator ++()
	p.show();
	return 0;
}
