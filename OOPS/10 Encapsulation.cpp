/* What is an encapsulation in C++?

In normal terms Encapsulation is defined as wrapping up of data and function under a single unit called class.
A Fully encapsulated class is that where all    Data member are marked as private

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
}};
    
    int main () {   
        student s;
        cout<<"sab sahi chal rha h"<<endl;

    return 0;
    }