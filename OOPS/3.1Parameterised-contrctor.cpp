/* Parameterized Constructors:Typically, these arguments help initialize an object when it is created. To create a 
parameterized constructor, simply add parameters to it.
When you define the  constructor’s body, use the parameters to initialize the object.  */
#include<iostream>
using namespace std; // this is namespace
class add{
    public:
    int ans;
    add(int num1, int num2){
        cout<<"Address of this pointer "<<this<<endl;
        this->ans = num1+num2;//this-> keyword is a pointer which stores the address of current object
        cout<<"ans "<<ans<<endl;
    }
    add(){//Default constructor
        cout<<"Default const..."<<endl;}
    
    int print (){
        cout<<"ans "<<ans<<endl;}};

int main (){
    add obj1(10,20); //Static object creation
    // add *obj2 = new add(10,20); //Dynamic Object creation
    // obj1.print();  -->Works well. This
    add obj3; 
    obj3.print();//Will give us error because we can only print using only that object by which we have passed our data HERE IT IS obj1

// -->If we implement our own constructor then constructor created by compiler will  be dead and it shows error  -->  add obj4;
    
    return 0;
}