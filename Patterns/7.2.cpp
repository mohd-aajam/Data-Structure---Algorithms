// A 
// A B 
// A B C
// A B C D

#include<iostream>
using namespace std;

int main(){
 int size;
cin>>size;
int row=1;
    while(row<=size){
       char ch='A';
    int col=1;
        while(col<=row){  
            cout<<ch++<<" ";
            col++;
            }
            ch++;
    cout<<endl; 
    row++;
    }
    return 0;
}