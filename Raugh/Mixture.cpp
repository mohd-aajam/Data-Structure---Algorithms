// Question is Chef has A units of solid and B units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?
// A mixture is called a:
// 1) A solution if A>0 and B>0,
// 2) A solid if B=0, or
// 3) A liquid if A=0.

// Sample Input 1 
// 3
// 10 5
// 0 3
// 3 0

// Sample Output 1 
// Solution
// Liquid
// Solid

#include <bits/stdc++.h>
using namespace std;

int main () {
 int t,a,b;
 cin>>t;
string str;

 for(int i=0;i<t;i++){
     cin>>a>>b;
if(a>0&&b>0)
{
    
str.push_back('S');
str.push_back('o');
str.push_back('l');
str.push_back('u');
str.push_back('t');
str.push_back('i');
str.push_back('o');
str.push_back('n');
str.push_back(' ');
}

if(a<=0 && b>0)
{
    str.push_back('L');
    str.push_back('i');
    str.push_back('q');
    str.push_back('u');
    str.push_back('i');
    str.push_back('d');
    str.push_back(' ');
}

if(a>0&&b<=0){
str.push_back('S');
str.push_back('o');
str.push_back('l');
str.push_back('i');
str.push_back('d');
str.push_back(' ');

 }
 }
 for (int j=0; j<str.size(); j++){
        cout<<str[j];
        if(str[j]==' ')
cout<<endl;     
 }

return 0;
}