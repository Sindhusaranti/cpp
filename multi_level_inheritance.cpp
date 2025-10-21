#include<iostream>
using namespace std;
class Student
{
	protected:
		string name;
		int roll;
		void getst()
		{
			cout<<"Enter name and roll no:";
			cin>>name>>roll;
		}
		void showst()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Roll No = "<<roll<<endl;
		}
};
class Marks : public Student
{
	protected:
		int m1,m2,m3,m4,m5;
		void getm()
		{
			getst();
			cout<<"Enter m1,m2,m3,m4,m5 marks: ";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
};
class percentage: public Marks
{
	public :
	    float per;
	void showp()
	{
		getm();
		per=(float)((m1+m2+m3+m4+m5)/5);
		showst();
		cout<<"Percentage = "<<per;
	}
};
int main()
{
	percentage p;
	p.showp();
}
