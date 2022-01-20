 /* 
 batter approach
 k is number of rotation
  void rotate(vector<int>& nums, int k) {       
        int n = nums.size();
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];            //FORMULA (i+k)%n
        }
        nums=temp;
    } */
  


#include <bits/stdc++.h>
using namespace std;
 void rotateArray(int arr[], int sizeOfArray)
 {     int firstElement=arr[0];
 for(int i=1;i<sizeOfArray;i++){
arr[i-1]=arr[i];
 }
 arr[sizeOfArray-1]=firstElement;
 }
 
int main () {
 int sizeOfArray;cout<<"Size of array ";cin>>sizeOfArray;
int arr[sizeOfArray];
cout<<"Array elements ";
for (int i = 0; i<sizeOfArray; i++){
  cin >> arr[i];
}
cout<<"No. of rotation ";
int rotation;cin>>rotation;
for(int i=0;i<rotation; i++){
    rotateArray(arr,sizeOfArray);
}
for (int i = 0; i<sizeOfArray; i++)
  cout<< arr[i]<<" ";
return 0;
}

