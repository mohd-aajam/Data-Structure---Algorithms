#include<iostream>
#include<algorithm>
using namespace std;
int stack(int arr[], int n) {
int k;cin>>k;
int start = 0, end=n-1;
while(start<=end){
arr[start]=arr[start]+k;
arr[end]=arr[end]-k;
start++;
end--;
}
int x;
x=arr[n-1]-arr[0];
return x;
}
int main(){
int n; cin>>n;
int arr[n];
for(int i=0; i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
cout<<stack(arr,n);
    return 0;
}