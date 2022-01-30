#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int count=1;
    bool flag=true;
    for(int i=1;i<=n/2;i++){
        if(i%2!=0){
            cout<<count<<" ";
            count+=3;
            }
        else cout<<count++<<" ";
        if(i==n/2 && n%2!=0 && count%2!=0){
        cout<<n;
        flag=false;
        }
    }
    cout<<endl;
    count=2;
    for(int i=1;i<=n/2;i++){
         if(i%2==0){
         cout<<count<<" ";
         count+=3;
		}
        else cout<<count++<<" ";
    }
    if(flag && n%2!=0) cout<<n;
    return 0;
}
