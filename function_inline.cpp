#include<iostream>
using namespace std;
inline int big(int a,int b)
{
	return (a>b?a:b);
}
int main()
{
	int a,b,res;
	
	res=big(10,20);
	cout<<"Biggestvalue= "<<res;
	return 0;
}
