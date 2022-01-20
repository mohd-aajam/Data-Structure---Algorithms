#include <bits/stdc++.h>
using namespace std;
 void patSearch(string text, string pattern){
     int j;
     int textLength = text.length();
     int patternLength = pattern.length();
     for(int i=0;i<=textLength-patternLength;i++){
         for(j=0;j<patternLength;j++)
         if(text[i+j]!=pattern[j])
         break;
         if(j==patternLength)
         cout<<i;
     }
 }
 
int main () {
 string text,pat;
 cin>>text>>pat;
 patSearch(text,pat);
return 0;
}

// Time complexity is O((n-m+1)xm)
// here n= text.length
// and m=pattern.length();