#include<iostream>
using namespace std;
 
int main () {
 char ch[10];
cin>>ch;

int count=0;
// here \0 means null index 
for(int i=0;ch[i]!='\0';i++)
count++;

cout<<count<<endl;

cout<<ch;

return 0;
}