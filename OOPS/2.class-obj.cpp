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
//Dynamic allocation of object --> aajam * me = new aajam
me.setaajam("i am aajam");
cout<<me.getaajam();
cout<<endl;
cout<<me.mohd;

    return 0;
}