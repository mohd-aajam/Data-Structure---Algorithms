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