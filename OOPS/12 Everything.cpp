#include<bits/stdc++.h>
using namespace std;

class Hero { //class
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

// /* 
   Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health) {
        this -> health = health; //this is  a pointer which stores the address of current object i.e here it sotres the address of kon (object)
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

        // Copy constructor
// /*
    Hero(Hero& temp) { //pass & because of avoiding infinite loop
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);//Deep copy means (pass by value) allocate new space and copy
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
// */
// */
    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char name[]){
        strcpy(this->name, name);
    }
    static int random(){
        return timeToComplete ;
//No need to create onject, not have this keyword,static function can only access static member
    }

    //Destructor
    ~Hero() { 
        cout << "Destructor bhai called" << endl;
    }

};
int Hero::timeToComplete = 5; //always need to initialize static data member
//datatype scopeResolutionOperator dataMember = value

int main() {cout<<endl;

    //cout << Hero::timeToComplete << endl;
    // cout << Hero::random() << endl;
    // Hero a;
    // cout << a.timeToComplete << endl;


    // Hero b;
    // b.timeToComplete = 10 ;
    // cout  << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;


 //Static data member belongs to class and it no need to create object
    // Hero a;

    // //Dynamic
    // Hero *b = new Hero();
    // //manually destructor call
    // delete b;


// /*  
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[6] = "Aajam";
    hero1.setName(name);
    hero1.print();
    //use default copy constructor
    Hero hero2 = hero1;//Shallow copy means the object is crated with same address(pass by referance). when we change in hero1 then changes also occur in hero2 
    hero2.print();
    hero1.name[0] = 'j';
    hero1.print(); 
    hero2.print();
//Deep copy
    hero1 = hero2;
    hero1.print();
    hero2.print();
// */


/*
    //object created statically
    // default constructor will die if we make our own constructor
    cout<<"Static ";
    Hero wow(10); //it is a parameterized constructor
    wow.print();
    //dynamically
    cout<<"Dynamic ";
    Hero *h =  new Hero(11);
    h->print();
    Hero temp(22, 'B');
    cout<<"Temp ";
    temp.print();
*/


/*
    //static allocation
    Hero a; 
    a.setHealth(70);
    a.setLevel('A');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;
    //dynamicallly
    Hero *b = new Hero;
    b->setLevel('B');
    b->setHealth(80);
    cout << "level is  " << (*b).level << endl;
    cout << " health is " << (*b).getHealth() << endl;
    cout << "level is  " << b->level << endl; 
    cout << " health is " << b->getHealth() << endl;
*/
    

/*
    Hero motor; //creation of Object
    cout << "Size of motor is " << sizeof(motor) << endl;
    cout << "motor health is " << motor.getHealth() << endl;//useGetter method
    motor.setHealth(70);//use setter method
    motor.level = 'A';
    cout << "motor health is: " << motor.getHealth() << endl; 
    cout << "Level is: " << motor.level << endl; 
    //cout << "size : " << sizeof(h1) << endl;
*/
    return 0;
}