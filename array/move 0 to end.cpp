#include<iostream>
using namespace std;
int zero(int arr[], int n)
{
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<endl<<endl;
  }
    int count = 0;
for(int i=0;i<n;i++)
{
    if(arr[i]!=0)// if(arr[i]==0) for all zero in starting
    {
        swap(arr[i],arr[count]);
        count++;
    }
}
for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<endl;
  }
}
int main()
{
int arr[]={3,0,6,0,5,0,0,0,0,4,3,4,0};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<zero(arr,n);
    return 0;
}