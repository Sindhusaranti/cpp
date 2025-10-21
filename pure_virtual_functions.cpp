#include<iostream> 
using namespace std; 
class Base 
{  
public: 
virtual void show()=0;  // Pure virtual function            
}; 
class Derived:public Base 
{     
public: 
void show(){ 
    cout<<"example of virtual()";}        
}; 
int main() 
{              
Derived d; 
Base *bptr;  // Base class pointer 
bptr=&d;     
bptr->show(); 
return 0; 
} 
