#include<iostream>
using namespace std;
 
 int Palindrome(int n){
     if(n<0) return false;
    else{
        long long ans=0, mod;
        for(int i=n;i>0;i/=10){
            mod = i%10;
            ans= ans*10+mod;
        }
        if(ans =n) return true;
        else return false;
 }
 }

int main () {
    int n;
    cin>>n;
    cout<<Palindrome(n);
    
return 0;
}