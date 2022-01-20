#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i;
cin>>n;
int arr[n];
// int ar[n];
for(i=0;i<n;i++)
cin>>arr[i];
int a0=0,a1=0,a2=0;
for (int i=0;i<n;i++)
{
if(arr[i]==0)
    a0++;
else if(arr[i]==1)
    a1++;
  else 
  a2++;
 }
for (i=0;i<a0;i++)
arr[i]=0;
for (i=a0;i<a0+a1;i++)
arr[i]=1;
for (i=a1+a0;i<n;i++)
arr[i]=2;

for (int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}