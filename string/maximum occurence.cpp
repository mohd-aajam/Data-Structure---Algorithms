#include <bits/stdc++.h>
using namespace std;

int main()
{
string s= "aaa";

int freq[26];
for(int i=0;i<26;i++)
freq[i]=0;

for(int i=0;i<s.size();i++)
freq[s[i]-'a']++;//increase the index from 0 to how many time it appear eg s[i]=b so b-a=1 so increase the index of 1 by one.
//increase a particular index value of an array how many times it appear
char ans='a';
int maxf=0;

for(int i=0;i<26;i++) 
{
    if(freq[i]>maxf)
    {
        maxf=freq[i];//max frequency will be maxf.
        ans=i+'a';    // it represent the character eg if c=3 so 3+a=4 means.
    }
}
cout<<maxf<<" "<<ans<<endl;

  return 0;
}

