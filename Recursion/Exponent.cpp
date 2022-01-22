#include<iostream>
using namespace std;
 
 long long power(long long a, long long b){
     //base case
     if(b==0) return 1;
     if(b==1) return a;

    //RECURSIVE CALL
    long long ans=power(a,b/2);

    if(b%2==0) //b is even
        return ans*ans;
    else  // b is odd
         return a*ans*ans;
 }
 
int main () { 
 long long a,b;
 cin >> a >> b;

long long ans=power(a,b);
cout<<"Answer is "<<ans<< endl;

return 0;
}