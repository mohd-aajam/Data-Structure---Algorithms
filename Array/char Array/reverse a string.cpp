#include<iostream>
using namespace std;
 
int main () {
 char ch[10];
cin>>ch;

int count=0;
for(int i=0;ch[i]!='\0';i++){
    count++;
}
int s=0,e=count-1;
while(s<=e){
    swap(ch[s++], ch[e--]);
   
}
cout<<ch;
return 0;
}