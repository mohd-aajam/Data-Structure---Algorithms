#include <iostream>
#include<map>
using namespace std;
int main () {

int n;
cin>>n;
int arr[n];
for (int i=0; i<n; i++) 

     cin>>arr[i];
 
 map<int, int>aajam;

for(int i=0; i<n;i++)
  aajam[arr[i]]++;

for(auto x:aajam)
    cout<<x.first<<" "<<x.second<<endl;

return 0;
}