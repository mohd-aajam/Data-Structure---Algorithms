// A friend class in C++ can access the private and protected members of the class in which it is declared as a
// friend.


#include<iostream>
using namespace std; // this is namespace

class XYZ{
    private:
        char ch='A';
        int num = 11;
    public:
        friend class ABC;

};

class ABC {
    public:
    void disp(XYZ obj){
        cout<<obj.ch<<endl;
        cout<<obj.num<<endl;
    }
};

int main ()
{
    ABC obj;
    XYZ obj2;
    obj.disp(obj2);
    return 0;
}