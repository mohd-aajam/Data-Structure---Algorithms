#include<bits/stdc++.h>
using namespace std;

 class hero{
     public:
     int health;
     int level;
     char *name;
     hero(){
        cout<<"Default constructor "<<endl;
     }
 //Copy constructor created by compiler will create shallow copy(means accessing the same memory)
    //Our Copy constructor will make Deep copy means create another copy our memory
     hero(hero & deep){
         char *ch = new char[strlen(deep.name)+1];
         strcpy(ch, deep.name);
         this->name = ch ;
         cout<<"Copy Constructor "<<endl;
         this->health = deep.health;
         this->level = deep.level;
     }

     void SetHealth(int h){
         this->health = h;
     }
     void setLevel(int l){
         this->level = l;
     }
     void setStr(char n[]){
         this->name = n;
     }

     void print(string n){
         cout<<n<<" "<<this->health<<" "<<this->level<<" Name "<<name<<endl;
     }
 };
int main () {
    hero h1;
    h1.SetHealth(20);
    h1.setLevel(2);
    char n[6]="aajam";
    h1.setStr(n);
    h1.print("1st object");

    hero h2(h1); 
    h2.print("2nd object");

    h1.name[0]='b';
    h1.print("1st object");

    h2.print("2nd object");

return 0;
}