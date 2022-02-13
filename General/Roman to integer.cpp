#include<iostream>
using namespace std;

int romToInt(string str){
    int n=str.size();
    int ans = 0;
    for(int i=n;i>=0;i--){
        if(str[i]=='V') ans+=5;
        if(str[i]=='L') ans+=50;
        if(str[i]=='D') ans+=500;
        if(str[i]=='M') ans+=1000;

        if(str[i]=='I'){
            if(str[i+1]=='V' || str[i+1]=='X') ans-=1;
        else ans+=1;
        }

        if(str[i]=='X'){
            if(str[i+1]=='L' || str[i+1]=='C') ans-=10;
        else ans+=10;
        }

        if(str[i]=='C'){
            if(str[i+1]=='D' || str[i+1]=='M') ans-=100;
        else ans+=100;
        }
    }
    return ans;
}

int main(){

    string str;
    cin>>str;
    cout<<romToInt(str);

    return 0;
}