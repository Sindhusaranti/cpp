#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int l,int b){
			length=l;
			breadth=b;
			cout<<"Constructor is called"<<endl;
		}
		void area()
		{
			cout<<"Area of rectangle= "<<length*breadth<<endl;
		}
		~Rectangle()
		{
			cout<<"Destructor is called";
		}
};
int main()
{
	int l,b;
	cout<<"Enter length and breadth of a rectangle: ";
	cin>>l>>b;
	Rectangle r(l,b);
	r.area();
	return 0;
}
