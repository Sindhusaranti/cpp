#include<iostream>
using namespace std;
class unary
{
	private:
		int x,y,z;
	public:
		void get()
		{
			x=-12;
			y=54;
			z=89;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z;
		}
		void operator -()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	unary u;
	u.get();
	-u; //  u.operator -()
	u.show();
	return 0; 
}
