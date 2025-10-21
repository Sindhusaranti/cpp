#include<iostream>
using namespace std;
template<typename T>          // function template 
void Swapp(T x, T y)
{
	T z;
	cout<<"The values of x and y before swapping: ";
	cout<<x<<y<<endl;
	z=x;
	x=y;
	y=z;
	cout<<"The values of x and y after swapping: ";
	cout<<x<<y<<endl;
}
int main()
{   
    Swapp(49,12);        //Passing integer values as parameters
    Swapp(22.9,95.36);   //Passing double values as parameters
    Swapp(9.25f,100.36f);  //Passing float values as parameters
    
}
