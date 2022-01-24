#include <bits/stdc++.h>
using namespace std;

int main()
{
string aajam("54321");
sort(aajam.begin(), aajam.end(),greater<int>());//greater<int>() is for desending order

cout<<aajam;

  return 0;
}

