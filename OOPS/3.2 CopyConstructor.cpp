//It will copy the value of one object into another

#include<iostream>
using namespace std;
class car{
  public:
  int fuel;
  string color;

    car(int fuel, string color){
        this->fuel = fuel;
        this->color = color;
    }

    car(car& cc){  //use of & is to pass by reference so we will not stuck into loop
        cout<<"Copy constructor"<<endl;
        this->fuel = cc.fuel;
        this->color = cc.color;
    }    

    void print(){
        cout<<fuel<<endl<<color<<endl;
    }
};
int main(){
    car c(20, "red");
    c.print();
    car d=c;// or car d(c) will do same thing
    d.print();
    
    return 0;
}