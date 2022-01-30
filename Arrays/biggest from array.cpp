//for all cases time complexity is 0(n)
#include<iostream>
using namespace std;
int aajam(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)

        if(arr[i]>arr[res])
        res=i;
        return res;
}
int main()
{
    cout<<"Biggest element index is ";
   int arr[]={2,3,5,44,3,4,2,3,22,2,1,2,34,5,654,3,2,23,33,21,1,2,2111};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<aajam(arr,n);
    return 0;   
}