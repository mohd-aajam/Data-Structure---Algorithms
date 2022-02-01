//  * * * * *
//   * * * *
//    * * *
//     * *
//      *


#include<iostream>
using namespace std;

int main(){
    int size; cin>>size;
    int row=1;
    while(row<=size){
      int space=1;
      while(space<row){
          cout<<" ";
          space++;
      }
      int col=size-row+1;
      while(col>=1){
          cout<<"* ";
          col--;
      }
        cout<<endl;
        row++;
    }

    return 0;
}