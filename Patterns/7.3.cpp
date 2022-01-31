// A 
// B C 
// C D E 
// D E F G 
#include<iostream>
using namespace std;
 
int main () {
 int n;
 cin>>n;

 char ch='A', cj;
 int row=1;
 while(row<=n){
     cj=ch;
     int col=1;
     while(col<=row){
         cout<<cj++<<" ";
         col++;
     }
     ch++;
     cout<<endl;
    row++;
 }

return 0;
}