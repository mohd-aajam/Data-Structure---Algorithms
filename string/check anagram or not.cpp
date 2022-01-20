#include <bits/stdc++.h>
using namespace std;
 
int main () {
string s1,s2;
cin>>s1>>s2;
if(s1.size()!=s2.size()) {
    cout<<"false";
    exit(0);
}

    int count[256]={0};
    for(int i=0;i<s1.size();i++)
        count[s1[i]]++;

    for(int i=0;i<s1.size();i++)
        count[s2[i]]--;

    for(int i=0;i<256;i++){
    if(count[i]!=0){
    cout<<"False";
    break;}
    }   
    

return 0;
} 