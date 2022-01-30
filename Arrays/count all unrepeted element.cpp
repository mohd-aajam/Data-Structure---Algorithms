#include<iostream>
#include<unordered_set>

using namespace std;
 int countDist(int n, int arr[]){
unordered_set<int> dist;
for(int i=0; i<n; i++)
    dist.insert(arr[i]);

return dist.size();
 }
 
int main () {
 int n;
 cin>>n;
 int arr[n];
 for (int i=0; i<n; i++) {
     cin>>arr[i];
 }
 cout<<countDist(n, arr);

return 0;
}