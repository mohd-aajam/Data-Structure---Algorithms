#include <bits/stdc++.h>
using namespace std;
 
 
int main () {
 int t,n,ans=1,end;
 cin>>t;
 int arr[t];
 for(int i=0;i<t;i++) {
   cin>>n;
 if(n==1)
{ arr[i]=1;
 continue;}
while(ans*2<=n) 
    ans*=2;
end=n-ans+1;
if(n==ans)
{
    arr[i]=ans/2;
}
else
arr[i]=max(end,ans/2);
 }
 for(int i=0;i<t;i++){
     cout<<arr[i]<<endl;
 }
 
return 0;
}