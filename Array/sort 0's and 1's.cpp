#include<iostream>
using namespace std;
 
 
int main () {
int n;cin>>n; 
 int arr[n];
for(int i = 0; i < n; i++) cin>>arr[i];
int start=0,end=n-1;
  while(start<=end)
  {
      while(arr[start]==0 && start<end){
          start++;
      }
      while(arr[end]==1 && start<end){
          end--;
      }

      if(start<end){
     swap(arr[start],arr[end]);
     start++;
     end--;
      }

  }
  for (int i = 0; i <n; i++)
  cout<<arr[i];

return 0;
}