#include<bits/stdc++.h>
using namespace std;
 
 int rotate(int arr[][5]){
for(int row=0;row<5;row++){
    for (int col = row+1; col <5; col++){
     swap( arr[row][col], arr[col][row]);
    }         
}
for(int row=0;row<5;row++){
int s=0,e=4;
    while(s<e){
        swap(arr[row][s++], arr[row][e--]);
    }      
}


for(int row=0;row<5;row++){
    for (int col = 0; col <5; col++){
        cout<<arr[row][col]<<" ";
    }   
    cout<<endl;
}
 }
 
int main () {
 int arr[5][5]={{1,2,3,4,5},
                {6,7, 8,9,10},
                {11,12,13,14,15},
                {16,17,18,19,20},
                {21,22,23,24,25}};
rotate(arr);
return 0;
}