#include<iostream>
using namespace std;

void print(int arr[], int size, int first, int last){
    for(int i = 0; i<size; i++)
    cout << arr[i]<<" ";
    cout<<endl;
    cout<<"size "<<size<<endl;
    cout<<"first "<<first<<endl;
    cout<<"last "<<last<<endl;
}


int firstLastPos(int *arr, int size, int k){
    int first=-1;
    int last=-1;
    print(arr,size,first,last);
    //base case
    if(size==1 || size==0)
    return true;
    
    if(arr[0]==k){
    first=0;
    return first;
    }
    else
    first++

    if(arr[size-1]==k){
    last=size-1;
    return last;
    }
    last--;

   return firstLastPos(arr+1, size-2, k);     
    // print(arr,size);
}

int main () {
int size;
cin>>size;
int *arr=new int[size];
for(int i=0;i<size;i++)
cin>>arr[i];
int k;
cin>>k;

firstLastPos(arr, size, k);



return 0;
}