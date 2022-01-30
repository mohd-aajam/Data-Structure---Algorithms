#include<iostream>
using namespace std;
 
 bool palindrome(string str, int start, int end){
     //base case
     if(start>end) 
     return true;

    if(str[start]!=str[end])
    return false;
    else
    return palindrome(str, start+1, end-1);
 }
  
int main () {
    string str="aabaa";
    bool ans=palindrome(str,0,str.length()-1);
    if(ans) 
    cout<<"It's a Palindrome"<<endl;
    else
    cout<<"It's not a Palindrome"<<endl;
    return 0;
}