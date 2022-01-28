// line  24
// A A A
// B B B
// C C C

// line 25
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
    int col=1;
        while(col<=row){ 
            char ch='A'+col-1;
            // char ch='A'+col-1;
            cout<<ch<<" ";             
            col++;
            }
    cout<<endl;
    row++;
    }
    return 0;
}