#include<iostream>
using namespace std;
 
bool LinearSearch(int *arr, int size, int key){
    if(size==0)
    return  false;

    if(arr[0]==key)
    return true;
    else
    return LinearSearch(arr+1, size-1, key);

}
 
int main () {
 int arr[]={1,2,3,4,5,6};
 int size= sizeof(arr)/sizeof(int);
 int key=1;
 bool ans=LinearSearch(arr, size, key);
    if(ans)
    cout<<"found";
    else
    cout<<"Not found";
return 0;
}