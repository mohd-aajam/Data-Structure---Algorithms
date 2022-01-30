#include<iostream>
#include<algorithm>
using namespace std;
 int kth(int arr[], int n, int k){
   sort(arr,arr+n);
   if(k==1){
     cout<<arr[0]<<" "<<arr[n-1];
     return 0;
   }
     
int front=arr[0];
     int back=arr[n-1];
   for(int i=1;i<n;i++){
     
     if(arr[i-1]==arr[i])
     {
       front=arr[i];
     }
   }

 }
 
int main () {
int n,k;cin>>n>>k; 
 int arr[n];
 cout<<"Array size.Kth element.Array element";
for(int i = 0; i < n; i++) cin>>arr[i];
kth(arr,n,k);
return 0;
}