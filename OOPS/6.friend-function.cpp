/* A friend function is a function that is specified outside a class but has the ability to access the class members' 
protected and private data.  */


#include <iostream>
using namespace std;

class XYZ {
     private:
   int num=100;
   char ch='Z';
   public:
   friend void disp(XYZ obj);
};
//Global Function
void disp(XYZ obj){
   cout<<obj.num<<endl; 
   cout<<obj.ch<<endl;
}
int main() {
   XYZ obj;
   disp(obj);
   return 0;
}