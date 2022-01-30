//time complexity is 0(n)
#include<iostream>
using namespace std;
int aajam(int arr[],int n)
{
    for(int i=0;i<n;i++)//print array initially
    {
        cout << arr[i];
    }
  
 int temp=arr[0];
  for (int i=0;i<n;i++)
  {
// swap(arr[i],arr[i+1]);
arr[i]=arr[i+1];
  }
    arr[n-1]=temp;
     for(int i=0;i<n;i++)
    {
        cout << arr[i]<<endl;
    }
}

int main()
{
int arr[]={1,2,34,5,6,7,6,5,6,4,3};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<aajam(arr,n);
    return 0;
}