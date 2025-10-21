#include<iostream>
using namespace std;
class student   //Base class 
{
	protected:
		string name;
		int rollno;
		void getst()
		{
			cout<<"Enter name and rollno: ";
			cin>>name>>rollno;
		}
		void shows()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Roll No="<<rollno<<endl;
		}
};
class marks:public student   // Derived class marks inherits from Base class student
{
	protected:
		int m1,m2,m3,m4,m5;
		void getm()
		{   
		    getst();
			cout<<"Enter 5 subjects marks:";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
};
class sapl     //Another base class 
{
	protected:
		int cocur;
		int internal,external;
	void gets()
	{    
		cout<<"Enter cocurmarks,internal and external: ";
		cin>>cocur>>internal>>external;
	}
};
class per:public marks,public sapl //Derived class inherits from  class marks and sapl
{
	public:
		float percentage;
	void getp()
	{   getm();
	     gets();
		percentage=(float)(m1+m2+m3+m4+m5+cocur+internal+external)/8;
		cout<<"Percentage= "<<percentage;
	}
};
int main()
{
	per p;
	p.getp();
	return 0;
}
