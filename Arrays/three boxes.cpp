#include <bits/stdc++.h>
using namespace std;

int main () {
 int a,b,c,d,t;
 cin>>t;
 int arr[t];
 
 for(int i=0;i<t;i++){
     cin>>a>>b>>c>>d;
     if(a+b+c<=d)
     arr[i]=1;
else if(a+c<=d)
arr[i]=2;
else if(a+b<=d)
arr[i]=2;
else 
arr[i]=3;
 }
 for(int j=0;j<t;j++){
     cout<<arr[j]<<endl;
 }


  
return 0;
}