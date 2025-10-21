#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==1)
	return n;
	else 
	return(n*factorial(n-1));
}
int main()
{
	int x,r;
	cout<<"Enter a value: ";
	cin>>x;
	r=factorial(x);
	cout<<"Factorial of x is: "<<r;
	return 0;
}
