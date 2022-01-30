#include <bits/stdc++.h>
using namespace std;
 
void isContigious(int arr[] ,int sizeOfArray){
 int lastPositive=-1;
 int firstPositive=-1;
 int sum=0;
 for(int j=sizeOfArray-1;j>=0;j--){
     if(arr[j]>0){
        lastPositive=j;
        break; }}
        
for(int i=0;i<sizeOfArray;i++){
    if(arr[i]>0){
    firstPositive=i;
    break; }}

for(int k=firstPositive;k<=lastPositive;k++)
    sum=sum+arr[k];
cout<<sum;

        }
 
int main () {
 int sizeOfArray; cin>>sizeOfArray;
 int arr[sizeOfArray];
 for(int i=0;i<sizeOfArray;i++)
cin>>arr[i];

 isContigious(arr,sizeOfArray);
return 0;
}