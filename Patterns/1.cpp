// line 24
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4



// line 25
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;
int main () {
 int n;
 cin>>n;
int row=1;
while(row<=n){
    int col=1;
    while(col<=n){
cout<<col<<" "; 
// cout<<n-col+1<<" ";
        col++;
    }
    cout<<endl;
    row++;
}
return 0;
}