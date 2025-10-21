#include<iostream> 
using namespace std; 
class A    // base class 
{ 
 protected: 
  int n;  
  void get() // member function 
  { 
   n = 3; // Assigns 3 to n 
  } 
}; 
 
class B : public A // derived class 
{ 
 public: 
  void cube()  
  { 
   get(); // calling parent function 
   cout << n * n * n;  
  } 
}; 
 
 
 
 
int main() 
{ 
B b; // object 
b.cube(); // Call function to display cube of n 
return 0; // End of program
}
