#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	float r1,r2;
	cout<<"Enter a,b,c values in QE ax^2+bx+c: ";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0)
	{
		cout<<"Roots are real and distinct "<<endl;
		r1=(-b+sqrt(d))/(2*a);
	    r2=(-b-sqrt(d))/(2*a);
		cout<<"Root1= "<<r1<<endl;
		cout<<"Root2= "<<r2;
	}else if(d==0)
	{
		cout<<"Roots are real and equal "<<endl;
		r1=(-b+sqrt(d))/(2*a);
	    r2=(-b-sqrt(d))/(2*a);
		cout<<"Root1= "<<r1<<endl;
		cout<<"Root2= "<<r2;
	}else
	{
		cout<<"Roots are imaginary "<<endl;
		r1=(-b+sqrt(d))/(2*a);
	    r2=(-b-sqrt(d))/(2*a);
		cout<<"Root1= "<<r1<<endl;
		cout<<"Root2= "<<r2;
	}
	return 0;
}
