//  16 15 14 13
//  9 10 11 12
//  8  7  6  5
//  1  2  3  4

#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int squre=n*n;
bool flag=true;
int row=1;
while(row<=n){
    if(flag){
         int col1=1;
    if(row==1){ 
   while(col1<=n){
       cout<<squre--<<" ";
       col1++;
   }
    }
    else{
        squre=squre-n;
        while(col1<=n){
       cout<<squre--<<" ";
       col1++;
   }
    }
   flag=false;
    }
     else{
        squre=squre-n;
        int col2=1;
        while(col2<=n){
            cout<<++squre<<" ";
            col2++;
        }
        flag=true;
    }
    cout<<endl;
     row++;
}
    return 0;
}
