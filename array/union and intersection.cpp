#include <bits/stdc++.h>
using namespace std;

 int  uni(int arr1[], int arr2[],int m, int n){
int i=0,j=0;
cout<<"Unions are ";
while(i<m && j<n)
{
    if(arr1[i]<arr2[j])
    {cout<<arr1[i]<<" ";i++;}
else if(arr1[i]>arr2[j])
{cout<<arr2[j]<<" ";j++;}
else {cout<<arr2[j]<<" ";j++;i++;}
}

while(i<m){
    cout<<arr1[i++]<<" ";}
while(j<n){
    cout<<arr2[j++]<<" ";}
    cout<<endl;
}
int  Int(int arr1[], int arr2[],int m, int n){
int i=0,j=0;
cout<<"Intersection are ";
while(i<m && j<n)
{
    if(arr1[i]<arr2[j])
    i++;
else if(arr1[i]>arr2[j])
j++;
else {cout<<arr2[j]<<" ";j++;i++;}
}
}


int main (){
int m,n;
cin>>m>>n;
int arr1[m],arr2[n];
for(int i=0;i<m;i++)
cin>>arr1[i];
for(int i=0;i<n;i++)
cin>>arr2[i];
uni(arr1, arr2,m,n);
Int(arr1, arr2,m,n);
return 0;
}