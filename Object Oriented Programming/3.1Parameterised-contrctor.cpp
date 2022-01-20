/* Parameterized Constructors:Typically, these arguments help initialize an object when it is created. To create a 
parameterized constructor, simply add parameters to it the way you would to any other function.
When you define the  constructor’s body, use the parameters to initialize the object.  */

#include<iostream>
using namespace std; // this is namespace

class Add{
    public:
    Add(int num1, int num2){
        cout<<(num1+num2)<<endl;
    }
};

int main (){
    Add obj(10,20);
    return 0;
}