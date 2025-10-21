#include<iostream>
using namespace std;
class Rectangle {
	int x, y;
public:
	Rectangle(int a = 2, int b = 8) {
		x = a;
		y = b;
	}
	// Copy constructor
	Rectangle(const Rectangle &r) {
		x = r.x;
		y = r.y;
	}
	void area() {
		cout << "Area = " << x * y << endl;
	}
};
int main() {
	Rectangle r1(5, 4);
	Rectangle r2 = r1;  // Copy constructor called
	r1.area();
	r2.area();
	return 0;
}
