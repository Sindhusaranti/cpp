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
			x=45;
			y=-96;
			z=-8;
		}
        void show()
        {
        	cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z;
		}
	friend void operator ++(preincrement &p);
};
void operator ++(preincrement &p)
{
	p.x++;
	p.y++;
	p.z++;
}
int main()
{
	preincrement p;
	p.get();
	++p;  //  p.operator ++(p)
	p.show();
	return 0;
}
