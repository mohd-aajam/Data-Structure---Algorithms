#include<iostream>
using namespace std;
 
 void reverse(string &str, int start, int end){
     //base case
     if(start>end)
     return;
     swap(str[start], str[end]);
    start++;
    end--;
   reverse(str,start,end);
 }

int main () {
 string str="Programming";
   
 reverse(str, 0, str.length()-1);
 cout<<str;

return 0;
}