//Static keyword will create a data member will belongs to class to access that data member we no need to create object
#include<iostream>
using namespace std;
 
 class hero{
     public:
    static int time;
     int health=100;

    static int thisIsStatic(){
        // cout<<health <--only access static member
        cout<<time;  //time is static
    }

 };
 int hero::time = 5;  //initialize

int main () {
    cout<<hero::time<<endl;  // access
    hero::thisIsStatic();

return 0;
}

/*Static functions
Static functions can only access static member
no need to create object
it not have this keyword bcoz doesn't have any pointer to object
*/