// A 1
// B 2 C 3
// D 4 E 5 F 6
// G 7 H 8 I 9 J 10
// K 11 L 12 M 13 N 14 O 15

#include<iostream>
using namespace std;

 
int main () {
 int n ;
 cin>>n;
int row=1;
char ch='A';
int count=1;
bool b = true;

    while(row<=n){
        int col=1;
        while(col<=row){
            if(b==true){
            cout<<ch++<<" ";
            b=false;
            }
            if(b==false){
                cout<<count++<<" ";
            b = true;
            }
            col++;
        }
            cout<<endl;
            row++;
    }

return 0;
}