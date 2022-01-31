// A A A 
// B B B
// C C C

#include<iostream>
using namespace std;

int main(){
 int size;
cin>>size;
 char ch='A';
int row=1;
    while(row<=size){
       
    int col=1;
        while(col<=size){  
            cout<<ch<<" ";
            col++;
            }
            ch++;
    cout<<endl; 
    row++;
    }
    return 0;
}