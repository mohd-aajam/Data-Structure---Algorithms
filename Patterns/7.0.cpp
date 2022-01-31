// A B C
// A B C
// A B C

#include<iostream>
using namespace std;

int main(){
 int size;
cin>>size;

int row=1;
    while(row<=size){
        char ch='A';
    int col=1;
        while(col<=size){  
            cout<<ch++<<" ";
            col++;
            }
            
    cout<<endl; 
    row++;
    }
    return 0;
}
