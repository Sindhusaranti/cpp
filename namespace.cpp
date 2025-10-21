#include<iostream>
using namespace std;
int a=200;
namespace one
{
	string display()
	{
	 string a="saranti";
	 return a;	
	} 
}
namespace two
{
	string display()
	{
		string n="sindhu";
		return n;
	}
}
int main()
{    int a=30;
	cout<<two::display()<<" ";
	cout<<one::display()<<endl;
	cout<<"local variable= "<<a<<endl;
	cout<<"Global variable= "<<::a;
	return 0;
}
