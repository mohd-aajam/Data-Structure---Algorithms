#include <bits/stdc++.h>
using namespace std; 
int main () {
    cout << "size of 1st array ";
 int FirstArrSize,SecondArrSize;
 cin >> FirstArrSize;
 cout<<"Enter Elements of first array "<<endl;
 int firstArray[FirstArrSize];
 for(int i=0; i<FirstArrSize; i++)
 {
     cin >> firstArray[i];
 }
 cout << "Size of 2nd array ";
 cin>>SecondArrSize;
 cout<<"Enter Elements of second array "<<endl;
 int secondArray[SecondArrSize];
 for(int i=0; i<SecondArrSize;i++)
 {
     cin >> secondArray[i];
 }

 for(int i=0;i<FirstArrSize;i++){
for(int j=0;j<SecondArrSize;j++){
    if(firstArray[i]==secondArray[j])
    cout<<"Union is :"<<firstArray[i]<<" ";
    

else  if(firstArray[i]!=secondArray[j])
    cout<<"Intersection is :"<<firstArray[i]<<" "<<secondArray[j];
}

 }

return 0;
}