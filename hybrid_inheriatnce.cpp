#include<iostream> 
using namespace std; 
class student 
{ 
 protected: 
  string name; // stores student name 
  int rno; // stores roll number 
  void getst() // function to input student details 
  { 
   cout << "Enter name,rno:";  
   cin >> name >> rno; 
  } 
  void showst() // function to display student details 
  { 
   cout << "name:" << name << endl; 
   cout << "rollno:" << rno << endl; 
  } 
}; 
class marks: public student 
{ 
 protected: 
  int m1, m2, m3, m4, m5; // marks of 5 subjects 
  void getm() // function to input subject marks 
  { 
   getst(); // calls student input function 
   cout << "5 subject marks";  
    
cin >> m1 >> m2 >> m3 >> m4 >> m5; 
  } 
}; 
class sabl 
{ 
 protected: 
  int a1, a2; // activity marks 
  void getsa()  
  { 
   cout << "Enter 2 activity marks:";  
   cin >> a1 >> a2; 
  } 
}; 
class percentage: public marks, public sabl 
{ 
 float per; //data member 
 public: 
  void showp()  
  { 
   getm();  
   getsa();  
   per = (m1 + m2 + m3 + m4 + m5 + a1 + a2) / 7.0;  
   showst();  
   cout << "percentage=" << per;  
  } 
}; 
 
 
 
int main()
{
percentage p; // create object of derived class 
p.showp(); // call function to display details and percentage 
return 0; // end of program
}
