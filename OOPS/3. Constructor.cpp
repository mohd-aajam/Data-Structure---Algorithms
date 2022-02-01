// A constructor is a special type of member function of a class which initializes objects of a class. 
// Constructor is automatically called when object(instance of class) create.

#include<iostream>
using namespace std; // this is namespace

class constructorDemo{ 
    public:
    constructorDemo(){
        cout<<"This is from a Constructor";
      }
};

int main (){
    constructorDemo obj;
    return 0;
}