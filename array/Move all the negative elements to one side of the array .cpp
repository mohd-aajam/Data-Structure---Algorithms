#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
cin>>arr[i];
int j=0;
for(i=0;i<n;i++)
{
    if(arr[i]<0)
    {
        swap(arr[i],arr[j]);
        j++;
    }
}
for(i=0;i<n;i++)
cout<<arr[i]<<" ";

    return 0;
}