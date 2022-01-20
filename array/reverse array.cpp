//time complexity is 0(n)
#include<iostream>
using namespace std;
int aajam(int arr[],int n)
{
    // for(int i=0;i<n;i++)//print array initially
    // {
    //     cout << arr[i];
    // }

   int low=0 ,high=n-1;
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    
     for(int i=0;i<n;i++)
    {
        cout << arr[i]<<endl;
    }
}

int main()
{int n;
cin>>n;
    int arr[n];
// int arr[]={1,2,4,3,2,5,7,5,3};

for(int i=0;i<n;i++)
{
   cin>>arr[i];
}
// int n=sizeof(arr)/sizeof(arr[0]);
cout<<aajam(arr,n);
    return 0;
}