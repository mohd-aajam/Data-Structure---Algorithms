/* Multi Level Inheritance */
// When one class inherits another class which is further inherited by another class, it is known as multi level inheritance in C++. 
//C inherits B and B inherits A (A->B->C)
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

class C : public B{
    public:
    C(){
        cout<<"Constructor of C"<<endl;
    }
};

using namespace std; 
int main (){
    C obj;
    return 0;
}