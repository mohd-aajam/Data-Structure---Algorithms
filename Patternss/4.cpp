// line 25
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// line 21,26,27
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main(){
 int n;
cin>>n;
int i=1;
int count=1;
    while(i<=n){
    int j=1;
        while(j<=i){
            // cout<<i<<" ";
            cout<<count<<" ";
            count++;
            j++;}
    cout<<endl;
    i++;
    }
    return 0;
}