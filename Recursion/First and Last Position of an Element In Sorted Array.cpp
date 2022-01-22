#include<iostream>
using namespace std;


int firstLastPos(int *arr, int size, int k,int first, int last){
    //base case
    if(size==1 || size==0)
    return true;
    
    if(arr[0]==k){
    first=0;
    return first;
    }
    else
    first++;

    if(arr[size-1]==k){
    last=size-1;
    return last;
    }
    last--;
   return firstLastPos(arr+1, size-2, k,first,last);     
}

int main () {
int arr[]={1,2,2,3,4,5};
int size = sizeof(arr)/sizeof(int);
int k;
cin>>k;
  int first=0;
    int last=size-1;
firstLastPos(arr, size, k,first,last);

return 0;
}