#include<iostream>
using namespace std;
 int kadane(int arr[], int n){
     int currSum=0;
     int maxSum=0;
     for(int i=0;i<n;i++){
         currSum+=arr[i];
     if(currSum>maxSum)
        maxSum=currSum;
     if(currSum<0)
        currSum=0;
     }
     return maxSum;
 }
 
int main () {
int n; cin>>n; 
int arr[n];
for(int j=0;j<n;j++)
cin>>arr[j];
cout<<kadane(arr,n);
return 0;
}