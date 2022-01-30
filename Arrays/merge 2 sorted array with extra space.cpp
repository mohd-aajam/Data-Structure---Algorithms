#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int i = 0, j = 0, k = 0;
    while (i < n && j < m){
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];        
        else 
            arr3[k++] = arr2[j++];        
    }
    while (i < n)    
        arr3[k++] = arr1[i++];    

    while (j < m)
        arr3[k++] = arr2[j++];
    
}

void print (int arr3[], int l){
    for(int i=0;i<l;i++){
        cout<<arr3[i]<<" ";
    }
}

int main()
{
    int arr1[5] = {1, 4, 6, 9, 11};
    int arr2[5] = {2, 3, 7, 9, 11};
    int arr3[10] = {0};

    merge(arr1, 5, arr2, 5, arr3);
    print(arr3, 10);

    return 0;
}