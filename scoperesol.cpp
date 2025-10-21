#include<iostream>
using namespace std;
int a=299;
int main()
{
	int a=34;
	cout<<"local variable= "<<a<<endl;
	cout<<"Global variable= "<<::a;
	return 0;
}
