// A D G 
// B E H 
// C F I 

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  char first ='A',second='A';
  for(int row=1;row<=n;row++){
      first=second;
     for(int col=1;col<=n;col++){
          cout<<first<<" ";
          first=first+n;
      }
      second++;
      cout<<endl;
  }
    return 0;
}