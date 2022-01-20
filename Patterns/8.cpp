// A B C
// D E F
// G H I


#include<iostream>
using namespace std;

int main(){
 int n;
cin>>n;
int row=1;
int value=0;
    while(row<=n){
    int col=1;
    
        while(col<=n){ 
            char ch='A'+value;
            cout<<ch<<" ";             
            value++;
            col++;
            }
    cout<<endl;
    row++;
    }
    return 0;
}