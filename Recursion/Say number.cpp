#include<iostream>
using namespace std;
 
 void sayNumber(string arr[], int n){
 if(n==0)
    return ;

    int digit=n%10;
        n=n/10;

        sayNumber(arr,n);

        cout<<arr[digit]<<" ";
 }
int main () {
 string arr[10]={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
int n;
cin>>n;
    cout<<n<<" -> ";
sayNumber(arr, n);

return 0;
}