#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     string aajam("ksjdnsdfSKJDBDSKknfdkvjfnvkjf");

transform(aajam.begin() ,aajam.end(), aajam.begin() , :: tolower);
    //  for(int i=0;i<aajam.length();i++)
    //  {
    //      if(aajam[i]>='a'&& aajam[i]<='z')
    //      {
    //          aajam[i]-=32;
    //      }
    //  }
     cout<<aajam;


     return 0;
 }