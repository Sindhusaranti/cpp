//Volume of the box by defining member functions outside the class
#include<iostream>
using namespace std;
class box
{
	private:
		int length,breadth,heigth;
	public:
		int volume(int,int,int);
};
int box::volume(int length,int breadth,int heigth)
{
	return(length*breadth*heigth);
}
int main()
{
	box b;
	int l,br,h;
	cout<<"Enter length,breadth and height of the box: ";
	cin>>l>>br>>h;
	cout<<"Volume of the box: "<<b.volume(l,br,h);
	return 0;
}
