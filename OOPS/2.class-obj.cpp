/*
object is an entity that has state and behavior, it is instance of class
Syntax
class class_name
*/
/*
#include<iostream>
using namespace std; // this is namespace

class car{
    char color[10];
    public:
    int speed;
    public:
    void getdata(int distance, int fuel){
        cout<<"The car has covered "<< distance << " km and has consumed " << fuel <<"L fule\n";
    }

    void mileage(float distance, float fuel);
    void carspeed(){
        cout<<"The car speed is" << speed <<"\n";
    }

} audi;

void car :: mileage(float d, float f){
    float carmileage = d/f;
    cout<<"The car mileage is " << carmileage <<"\n";
}

int main (){
    car swift;
    // swift.getdata(130, 7);
    // audi.getdata(150,25);
    // swift.mileage(130,7);

    swift.speed = 50;
    swift.carspeed();

    return 0;
}*/

#include<iostream>
using namespace std;

class aajam{
    private:
    string aajam;

    public:
    string mohd="i am mohd";
    string getaajam(){
        return aajam;
    }
    string setaajam(string name){
       return aajam=name;
    }

};

int main(){
aajam me;
me.setaajam("i am aajam");
cout<<me.getaajam();
cout<<endl;
cout<<me.mohd;


    
        

    return 0;
}