#include <bits/stdc++.h>
using namespace std;

  int firstRepet(string str) {
     int res=INT_MAX; //INT_MAX means infinite
        int FI[256]; //fill -1 in array size of 256
     for(int i=0; i<256; i++){
         FI[i]=-1;
     }
     for(int i=0 ;i<str.length();i++){
         if(FI[str[i]]==-1)
         FI[str[i]]=i;
         else
         FI[str[i]]=-2;
     }
     for(int i=0;i<256;i++){
         if(FI[i]>=0)
         res=min(res,FI[i]);
     }
     return(res==INT_MAX)?-1:res;
  }
  
int main () {
    string str;
    cin>>str;
    cout<<firstRepet(str);
return 0;
}