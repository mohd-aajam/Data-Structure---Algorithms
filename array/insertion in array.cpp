#include<iostream>
using namespace std;
int main()
{
     int n,pos,num,i;
int a[n]={1,2,3,4,5};
 n=sizeof(a)/sizeof(a[0]);//find size of array
 n++;//+1 size of array
cout<<"Give the position and no. ";

cin>>pos>>num;

for(i=n;i>=pos;i--)
a[i+1]=a[i];//loop for shifting 
a[pos]=num;//for insert new element

cout<<"new array"<<endl;
for (i=0;i<n;i++)
cout<<a[i]<<" ";
    return 0;
}