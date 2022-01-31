/* Operator Overloading
In simple term we can assign particular work to particular operator.

This means C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading
--> For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +.
*/

#include<iostream>
using namespace std;
class klass {
    public:
    int a;

    void operator+ (klass &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
//Same thing  uncomment any of this line  // cout<<"output "<<obj.a-this->a<<endl;
//Same thing  uncomment any of this line  // cout << "output " << value2 - value1 << endl; 
        cout << "Hello Aajam" << endl;
    }
    void operator() () {
        cout << "Main Bracket hu "<< this->a << endl;
    }
};
int main (){
    klass obj1, obj2;
    obj1.a = 3;
    obj2.a = 10;
    obj1 + obj2;


    obj1() ;

    return 0;
}