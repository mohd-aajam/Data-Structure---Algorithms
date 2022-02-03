/*Solve Inheritance Ambiguity ?.
We have class A it has a function xyz;
We have class B it has a function xyz;
we have C it inherit A and B and it call function xyz then which function will called function of class A or class B
*/
#include<iostream>
using namespace std;
 
 class A {
     public:
     void xyz(){
         cout<<"xyz from class A";
     }
 };
 class B {
     public:
     void xyz(){
         cout<<"xyz from class B";
     }
 };
class C : public A, public B{
};

int main () {
 C obj;
//obj.xyz(); <-- can't access 
 obj.A::xyz();  // obj.className::function
 obj.B::xyz();

return 0;
}