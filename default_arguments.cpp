#include<iostream>
using namespace std;
class simple
{
  private:
  int p,t,r;
  public:
  void si(int p,int t=2,int r=1)
  {
    cout<<"Simple Intrest= "<<(p*t*r)/100;	
  }	
};
int main()
{   int pr,ti,ra;
	cout<<"Enter principle,time and rate: ";
	cin>>pr>>ti>>ra;
	simple s;
	s.si(pr,ti,ra);
	return 0;
}

