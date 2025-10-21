#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int x, y;
	public:
		// Default constructor
		Rectangle()
		{
			x = 2;
			y = 8;
		}
		// Constructor with int parameters
		Rectangle(int l, int m)
		{
			x = l;
			y = m;
		}
		// Constructor with float parameters
		Rectangle(float l, float m)
		{
			x = static_cast<int>(l);
			y = static_cast<int>(m);
		}

		// Constructor with double parameters
		Rectangle(double l, double m)
		{
			x = static_cast<int>(l);
			y = static_cast<int>(m);
		}
		void area()
		{
			cout << "Area of rectangle = " << x * y << endl;
		}
};
int main()
{
	Rectangle r1;              // Default constructor
	Rectangle r2(10, 20);      // int constructor
	Rectangle r3(2.3f, 1.5f);  // float constructor
	Rectangle r4(9.9, 8.8);    // double constructor
	r1.area();
	r2.area();
	r3.area();
	r4.area();
	return 0;
}
