#include<iostream> 
using namespace std; 
class A 
{ 
public: 
A() // constructor of class A 
{ 
cout << " Member function of A" << endl; 
} 
~A() // destructor of class A 
{ 
cout << " Member function of A" << endl; 
} 
}; 
class B: public A 
{ 
public: 
B() // constructor of class B  
{ 
cout << " Member function of B" << endl; 
} 
~B() // destructor of class B  
{ 
cout << " Member function of B" << endl; 
} 
}; 
class C: public A 
{ 
public: 
C() // constructor of class C  
{  
cout << " Member function of C" << endl; 
}
~C() // destructor of class C  
{ 
} 
}; 
int main() 
{ 
B b;  
C c;  
return 0; 
} 

