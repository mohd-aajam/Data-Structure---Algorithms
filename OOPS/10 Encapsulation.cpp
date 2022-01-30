/* What is an encapsulation in C++?

In normal terms Encapsulation is defined as wrapping up of data and function under a single unit.
In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulates them. 

Advantages-
-> Data Hiding for Security
-> If we want we can make our class read only
->Code Reusability
->Unit test
*/
    #include<iostream>
    using namespace std;

    class student{

    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
    };
    
    int main () {   
        student s;
        cout<<"sab sahi chal rha h"<<endl;

    return 0;
    }