#include<bits/stdc++.h>
using namespace std;

int main(){
  bool flag=true;
  string str;
  getline(cin, str);
  int start=0;
  int end=str.length()-1;
  while(start<=end){
    if(str[start]==str[end]){
      start++;
      end--;
    }
    else{
      flag= false;
    cout<<"Not a palindrome";
    break;
    }
  }
  if(flag)
  cout<<"Palindrome";


  return 0;
}
