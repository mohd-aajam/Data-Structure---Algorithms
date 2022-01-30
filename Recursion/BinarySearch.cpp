#include<iostream>
using namespace std;
 
 bool BinarySearch(int *arr, int start, int end, int key){
     //base case
     //element not found
     if(start>end)
     return false;
     int mid = start+(end-start)/2;
    //element found
    if(arr[mid]==key)
    return true;

    if(arr[mid]>key)
    BinarySearch(arr, start, mid-1, key);
    else
    BinarySearch(arr, mid+1, end, key);
 }
 
int main () {
  int arr[]={1,2,3,4,5,6,7,8,9,11,22,33,44,555,666,8888,9999};
 int key=9999;
 int size= sizeof(arr)/sizeof(int);
 int start=0;
 int end=size-1;
 bool ans=BinarySearch(arr, start, end, key);
    if(ans)
    cout<<"found";
    else
    cout<<"Not found";  

return 0;
}