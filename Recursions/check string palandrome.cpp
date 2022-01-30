#include<iostream>
#include<stdbool.h>
using namespace std;
bool fun(char arr[n], int s,int e)
{
if(s>=e)
return true;
if(str[s]!=str[e])
return false;
return fun(str,s+1,e-1)

}

int main()
{
  int n ;
  cin>>n;
  char arr[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
int s=0,e=n-1;
fun(arr[n],s=0,e=n-1);

  return 0;
}