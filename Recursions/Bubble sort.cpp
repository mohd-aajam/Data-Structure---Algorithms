#include<iostream>
using namespace std;
 
 void bubbleSort(int arr[], int size){
     //base case
     if(size== 0 || size==1)
     return ;

//solved 1 case it put the largest element in the end of the array
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    //RECURSIVE CALL
    bubbleSort(arr,size-1);
 }
 
int main () {
 int arr[]={9,4,3,6,7,1,3,2,8,6};
int size = sizeof(arr)/sizeof(int);
 bubbleSort(arr,size);

 for (int i=0;i<size;i++){
     cout<<arr[i]<<" ";
 }
 

return 0;
}