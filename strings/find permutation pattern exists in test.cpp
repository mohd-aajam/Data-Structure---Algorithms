#include <bits/stdc++.h>
using namespace std;
 
bool areSame(int countTxt[], int countPat[]){
for(int i=0;i<256;i++){
  if(countTxt[i]!=countPat[i])
    {return false;
    exit;}
        }
 return true;
}

int isAnagramPresent(string txt, string pat) {
int countTxt[256]={0};
int countPat[256]={0};
    for(int i=0;i<pat.length();i++) {
        countTxt[txt[i]]++;
        countPat[pat[i]]++; }
    for(int i=pat.length();i<txt.length();i++) {
        if(areSame(countTxt,countPat))
        return true;
        countTxt[txt[i]]++;
        countTxt[txt[i-pat.length()]]--;
    }
    return false;
 }
 
int main () {
 string txt,pat;
 cin>>txt>>pat;
 cout<<isAnagramPresent(txt,pat);
return 0;
}


// test cases
// aajam
// aa
// output =1


// aajam
// ma
// output =0