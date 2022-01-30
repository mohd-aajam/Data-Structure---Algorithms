#include<iostream>
using namespace std;
 
 int getSum(int *arr, int n ){
     cout<<sizeof(arr)<<endl;
     int sum = 0;
     for( int i=0; i<n; i++){
         sum += arr[i];
     }
     cout<<sum<<endl;
 }
 
int main () {
 
/* cout<<"address of arr is "<< arr<<endl;
cout <<" "<< &arr <<endl;
cout<<" "<<&arr[2]<<endl;
cout<<" "<<*arr+5<<endl;
cout<<" "<<(*arr)+5<<endl;
cout<<" "<<*(arr+5)<<endl; */
// cout<<arr[2]<<endl;
// cout<<2[arr]<<endl;
// int i =3;
// cout<<i[arr]<<endl;

// int temp[10]={1,2};
// cout<<sizeof(temp)<<endl;
// cout<<sizeof(*temp)<<endl;
// cout<<sizeof(&temp)<<endl;



int arr[6]={3,6,2,9,1,2};

getSum(arr, 3);  // 3 6 2 passed
getSum(arr+3, 3); // 9 1 2 paased




return 0;
}