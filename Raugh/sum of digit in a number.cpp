#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n<10) 
    {
return n;
    }
    
   return fun(n/10) + n%10;

}

int main()
{
  
  
    int n;
    cin>>n;
    cout<<fun(n);

  return 0;
}

