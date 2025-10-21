#include<iostream> 
using namespace std; 
class Shapes 
{ 
 public: 
  virtual void area()=0; 
}; 
 
class Circle: public Shapes 
{ 
 private: 
  int r;float area1; 
 public: 
  Circle() 
  { 
   r=5; 
  } 
   void area() 
  { 
   area1=3.14*r*r; 
   cout<<"Circle Area="<<area1<<endl; 
  } 
}; 
 
class Rectangle: public Shapes 
{ 
 private: 
  int length,breadth,area1; 
 public: 
  Rectangle() 
  { 
   length=10,breadth=20; 
  } 
   void area() 
  { 
   area1=length*breadth; 
   cout<<"Rectangle Area="<<area1<<endl; 
  } 
}; 
int main() 
{ 
 Shapes *ptr; 
 Circle c; 
 Rectangle r; 
 ptr=&c; 
 ptr->area(); 
 ptr=&r; 
 ptr->area(); 
 return 0; 
} 
