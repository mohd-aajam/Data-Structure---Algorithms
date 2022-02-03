/*The main purpose of abstraction “shows” only essential attributes and “hides” unnecessary information from the user. 
A class has the responsibility to determine which data member is to be visible outside and which is not.
Using access specifiers we can do the same;

ADVANTAGES
->Only you can make changes to your data or functions.
->It makes the application secure by not allowing others to see background details
->Increases the reusability of code

*/
#include<iostream>
using namespace std;
 class a{
     private: //hidden
     int abc;
     int def;
     public:
     void publi(){  //shown
         cout<<"Visible "<<endl;
     }
 };
 
int main () {
 
return 0;
}