#include<iostream>
using namespace std;
 
 int factorial(int n){
     if(n==0)
     return 1;

    int SP=factorial(n-1);
    cout<<n<<endl;
    int BP=n*SP;

    return BP;
    //  return n*factorial(n-1);
 }
 
int main () {

    int n;
    cin>>n;
    cout<<factorial(n);

return 0;
}