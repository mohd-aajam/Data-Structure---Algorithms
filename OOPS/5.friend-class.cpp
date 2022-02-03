// A friend class in C++ can access the private and protected members of the class in which it is declared as a
// friend.


#include<iostream>
using namespace std; // this is namespace

class ABC{
    private:
        char ch='A';
        int num = 11;
    public:
        friend class XYZ;
};
    
class XYZ {
    public:
    void disp(ABC obj1){
        cout<<obj1.ch<<endl;
        cout<<obj1.num<<endl;
    }
};

int main (){
    ABC obj1;
    XYZ obj2;
    obj2.disp(obj1);
    return 0;
}