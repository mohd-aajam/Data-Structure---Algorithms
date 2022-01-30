#include<iostream>
 using namespace std;

 int search(int arr[], int size, int key){
     int start=0;
     int end=size-1;
     int mid=start+(end-start)/2;
     while(start<=end){     
        if(arr[mid]==key)
        return mid;

        if(key>arr[mid])
            start=mid+1;

        else{   end=mid-1;  }
        
        mid=start+(end-start)/2;
     }
     return -1;


 }

  int main(){
      int even[8]={11,22,33,44,55,66,77,88};
      int odd[7]={2,3,4,5,6,7,8};
      
    int oddIndex=search(odd,7,8);    
      cout<<"Result of odd is "<<oddIndex<<endl;

    int evenIndex=search(even,8,55);
      cout<<"Result of even is "<<evenIndex<<endl;


      return 0;
  }