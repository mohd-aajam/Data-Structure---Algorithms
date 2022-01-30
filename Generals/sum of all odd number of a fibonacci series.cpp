#include<iostream>
using namespace std;
int fibOddSum(int n){
    int oddCount=0;
    int sum=0;
    int a=0, b=1,c=2,nextTerm=0;
    while(oddCount<n){
        nextTerm=a+b+c;
        a=b;
        b=c;
        c=nextTerm;
    if(nextTerm%2!=0 ||b==1){
    sum=sum + a;
    oddCount++;
    }
}
return sum;
}
int main(){
    int n; cin>>n;
cout<<fibOddSum(n);
    return 0;
}