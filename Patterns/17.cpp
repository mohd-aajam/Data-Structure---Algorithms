//   *    *
//   *   * *
//   *  *   *
//   * *     *
//   **       *
//   ***********
//   *        **
//    *      * *
//     *    *  *
//      *  *   *
//       *     *

#include <iostream>
using namespace std;
int main() {
   int size;
   cin>>size;
   if(size %2 == 0) return 0;
   int mid = size/2;
   //first half
   for(int a = 1; a<= mid; a++) {
      for(int b = 1; b<=(mid-a); b++) {
          if(b==1) cout<<"*";
         cout << " ";
      }
      if(a==mid) cout<<"*";
      if(a == 1) {
         cout << "*";
      }else{
         cout << "*"; 
         for(int b = 1; b<=2*a-3; b++) { 
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
   }
   //second half
   for(int a = mid+1; a<size; a++) {
       if(a==mid+1){
           for(int b = 1; b<=size; b++) {
               cout<<"*";
           }
           cout<<endl;
       }

      for(int b = 2; b<=a-mid; b++) {
         cout << " ";
        
      }
      if(a == size-1) {cout << "*";
      for(int b=0;b<mid;b++){
         cout<<" ";
      }
      cout<<"*";
      }
      else{
         cout << "*";
         for(int b = 1; b<=2*(size - a)-2; b++) { 
            cout << " ";
         }
         cout << "*";
         for(int b = 2; b<=a-mid; b++) {
         cout << " ";
      }
      cout<<"*";
      }
      cout << endl;
   }
   return 0;
}