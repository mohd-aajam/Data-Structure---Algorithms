// Hierarchical inheritance is defined as the process of deriving more than one class from a base class.
//Class B and C inherits class A

#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }
};
class B : public A{
    public:
    B(){
        cout<<"Constructor of B"<<endl;
    }
};

class C : public A{
    public:
    C(){
        cout<<"Constructor of C"<<endl;
    }
};

int main ()
{
    C obj;
    return 0;
}