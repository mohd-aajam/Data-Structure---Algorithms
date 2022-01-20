/* Virtual Function */
//accessing dereived classes function from base  class
#include<iostream>
using namespace std; // this is namespace

class base{
    public:
        virtual void print(){
            cout<<"I'm from base class"<<endl;
        }
         void show(){
            cout<<"I'm from base class"<<endl;
        }};
class dereived : public base{
    public:
        void print(){
            cout<<"I'm from derived class"<<endl;
        }
        void show(){
            cout<<"I'm from derived class"<<endl;
        }};

int main (){
    base* bb;  //make pointer object
    dereived d;  //normal object
    bb = &d;  //address of d assign to bptr

    bb->print(); //print function is virtual.
    bb->show(); //we didn't make virtual to base class function i.e.(show)(jo virtual function declare keya h sirf uska he address ye lega)

    return 0;
}