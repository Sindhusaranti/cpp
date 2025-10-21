#include<iostream>
using namespace std;
template<typename T1, typename T2>    //function template with multiple data types
class Sample
{
	private:
		T1 x;   // First data member of type T1  
		T2 y;   // Second data member of type T2
    public: 
    	void get()    // Function to take input 
    	{
    		cin>>x>>y;
		}
		void show()    // Function to display 
		{
			cout<<"x: "<<x<< " y: "<<y<<endl;
		}
};
int main()
{
	Sample <int,float>s1;    // Object with int and float types
	cout<<"Enter int , float value :";
	s1.get();
	s1.show();
	Sample <char,int>s2;     // Object with char and int types
	cout<<"Enter char , int values: ";
	s2.get();
	s2.show();
	Sample <float, char>s3;    // Object with float and char types
	cout<<"Enter float, char values: ";
	s3.get();
	s3.show();
}
