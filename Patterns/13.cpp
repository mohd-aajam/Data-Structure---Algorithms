// because line no. 31
//        *
//       **
//      ***
//     ****
//    *****

//because line no 32
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *

#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
  
    int row=1;
    while(row<=size){
       int space=size-row+1;
       while(space>1){
           cout<<" ";
           space--;
       }
       int star=1;
       while(star<=row){
           cout<<"*";
        //    cout<<"* ";
           star++;
       }
        cout<<endl;
        row++;
    }

    return 0;
}