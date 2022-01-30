/*  
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Example given below
time complexity
best case(if already sorted) --> o(n);
worst case --> o(n^2)
*/
#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr){
    int size =arr.size();
     for(int i=1;i<size;i++){
        bool swaped=false;
        for(int j=0;j<size-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1], arr[j]);
                swaped=true;
            }             
        } if(swaped==false)
                 break;          
    }  
}

int main() {
    vector<int>arr{1,5,3,2,7,1,2,8,0,9,4};
    bubbleSort(arr);
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}


 