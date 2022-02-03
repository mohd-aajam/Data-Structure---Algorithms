/* Destructors in are members functions in a class that delete an object and free the memory for dynamic allocations
A destructor is automatically called when:
1) The program is about to finish its execution.
2) When a scope containing local variable ends.
Destructor Automatically calls for static allocation.
->same as class name, no return type, no i/p parameters
->Destructor will call only once for every object.*/
#include<iostream>
using namespace std;

class HelloWorld{
    public:
    //Contructor
    HelloWorld(){
        cout<<"Constructor is Called"<<endl;
    }
    //Desctructor
    ~HelloWorld(){
        cout<<"Destructor is Called"<<endl;
    }
    //Member Function
    void display(){
        cout<<"Hello World from Member Function"<<endl;
    }
};
int main ()
{
    HelloWorld obj; //Object Created
    obj.display();

    return 0;
}