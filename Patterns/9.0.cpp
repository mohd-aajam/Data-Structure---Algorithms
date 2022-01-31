// A B C
// B C D
// C D E

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char first='A',second='A';
    for(int row=1;row<=n;row++){
        first=second;
        for(int col=1;col<=n;col++){
         cout<<first++<<" ";   
        }
        cout<<endl;
        second++;
    }
    return 0;
}