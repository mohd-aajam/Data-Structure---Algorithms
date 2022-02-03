/*/A constructor is a special type of member function of a class When we create a object then its constructor is automatically called.
--> It doesn't have any return type and no input parameter
-->If we implement our own constructor then constructor created by compiler will be dead
*/
#include<iostream>
using namespace std; // this is namespace

class constructorDemo{ 
    public:
    constructorDemo(){
        cout<<"This is from a Constructor"<<endl;
      }
};
int main (){
    constructorDemo obj1; // static
    constructorDemo * obj2 = new constructorDemo; // Dynamic
    //2 object name cann't be same
    return 0;
}