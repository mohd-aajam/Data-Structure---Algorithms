#include<iostream>
using namespace std;
 
int main () {
 int  n0=0;
 cout<<n0<<endl;
 int  n1=1;
 cout<<n1<<endl;
 int  n=10;
 int ans=0;
 for(int i=0;i<n;i++){
     ans=n0+n1;
     n0=n1;
     n1=ans;
 cout<<ans<<endl;
 }

return 0;
}