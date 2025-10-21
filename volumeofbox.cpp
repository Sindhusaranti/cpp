//Volume of the box defining member functions within the class
#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breadth,heigth;
	public:
		int volume(int length,int breadth,int heigth)
		{
			return(length*breadth*heigth);
		}
};
int main()
{
	Box b;
	int l,br,h;
	cout<<"Enter length,breadth and height of the box: ";
	cin>>l>>br>>h;
	cout<<"Volume of the box: "<<b.volume(l,br,h);
	return 0;
}
