//Space complexity o(n) 
// Time complexity is o(nlogn)

#include<iostream>
using namespace std;
    
    void marge(int *arr, int start, int end){
     int mid = start+(end-start)/2;
     int leftArrLen = mid-start+1; 
     int rightArrLen = end- mid;
     int *leftArr = new int[leftArrLen];
     int *rightArr = new int[rightArrLen];
     int mainArrayIndex = start;
    //copy array
     for(int i=0; i<leftArrLen; i++)
         leftArr[i] = arr[mainArrayIndex++];
     
     mainArrayIndex =mid+1;
     for(int i=0; i<rightArrLen; i++)
         rightArr[i] = arr[mainArrayIndex++];

     //marge two sorted arrays
     int leftArrIndex = 0;
     int rightArrIndex = 0;
     mainArrayIndex = start;
     while(leftArrIndex<leftArrLen && rightArrIndex<rightArrLen){
         if(leftArr[leftArrIndex] < rightArr[rightArrIndex])
         arr[mainArrayIndex++] = leftArr[leftArrIndex++];
        else arr[mainArrayIndex++] = rightArr[rightArrIndex++];
        }
     while(leftArrIndex < leftArrLen)
         arr[mainArrayIndex++] = leftArr[leftArrIndex++];
     while(rightArrIndex < rightArrLen)
        arr[mainArrayIndex++] = rightArr[rightArrIndex++];

        delete[]leftArr;
        delete []rightArr;
    }
 void mergeSort(int *arr, int start, int end){
     //base case
     if(start>=end) return;
     int mid = start+(end-start)/2;
     mergeSort(arr, start, mid);//sort left part
     mergeSort(arr, mid+1, end);//  sort right part
     marge(arr, start, end); //sort and merge splitted arrays
 }
 
int main () {
 int arr[] ={2,4,5,1,3,9,7,1};
 int size = sizeof(arr)/sizeof(int);
 mergeSort(arr, 0, size-1);
 for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
 }
 cout<<endl;
return 0;
}