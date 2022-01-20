#include<iostream>
using namespace std;
 
 void alternate(int arr[]){
 for(int i=0;i<10;i*=2){
     swap(arr[i],arr[i+1]);

 }
 for (int i = 0; i < 10; i++)
 cout<<arr[i];
 }
 
int main () {
 
 int arr[10];
for (int i = 0; i < 10; i++){
cin>>arr[i];
}
alternate(arr);

return 0;
}