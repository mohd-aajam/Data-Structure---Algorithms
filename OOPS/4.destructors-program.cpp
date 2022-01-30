/*A destructor is automatically called when:
1) The program finished execution.
2) When a scope (the { } parenthesis) containing local variable ends.
Destructors in C++ are members functions in a class that delete an object and free the memory
Destructor Automatically calls for static allocation.
*/


#include<iostream>
using namespace std; // this is namespace

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