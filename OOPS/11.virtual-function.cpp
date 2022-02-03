/* Virtual Function */
//accessing child class functions from parent  class
#include<iostream>
using namespace std;

class parent{
    public:
        virtual void print(){
            cout<<"I'm from parent class"<<endl;
        }
        void show(){
            cout<<"I'm from parent class"<<endl;
        }};
class child : public parent{
    public:
        void print(){
            cout<<"I'm from derived class"<<endl;
        }
        void show(){
            cout<<"I'm from derived class"<<endl;
        }};

int main (){
    parent* prt;  //make pointer object
    child chi;  //normal object
    prt = &chi;  //address of chi assign to ptr

    prt->print(); //print function is virtual.
    prt->show(); //we didn't make virtual to parent class function i.e.(show)(It only takes the addrees of declared virtual function)
    return 0;
}