 /* Polymorphism Part- 2 (Function Overriding->same function name & parameters in base and dereived class) it only depend on inheritance
 2) Runtime Polymorphism – This is also known as dynamic (or late) binding. */

#include<iostream>
using namespace std; // this is namespace

class A{
    public:
        void display(){
            cout<<"This is Super/Parent Class Function"<<endl;
        }};

class B : public A{
    public:
        void display(){
            cout<<"This is Base/Child Class Function";
        }};

int main ()
{
    A obj1;
    obj1.display();

    B obj2;
    obj2.display();// ye runtime pe pata lagega ke konsa function call hoga depending upon wo object kis class ka hai.

    return 0;
}