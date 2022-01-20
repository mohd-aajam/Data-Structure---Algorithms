#include<iostream>
using namespace std;

void fun(int n)//function
{
  if(n==0)
return;//came out of function
  fun(n-1); //calling fun itself.
    cout<<n<<" ";
}

int main()
{
int n;
cout<<"Enter a number";
cin>>n;
fun(n);
  return 0;
}