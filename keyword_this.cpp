#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int l,b;
	public:
		void get(int l,int b)
		{
			this->l=l;
			this->b=b;
		}
		void area()
		{
			cout<<"Area of the rectangle= "<<l*b;
		}
};
int main()
{
	Rectangle r;
	r.get(10,2);
	r.area();
}
