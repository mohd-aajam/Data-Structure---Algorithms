#include <bits/stdc++.h>
using namespace std;

//There should not be any space in input like --> my name is aajam

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int number = 0;
         number = s[i] - 'a';
        count[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
        if (count[i] > maxi)
        {
            maxi = count[i];
            ans = i;
        }   
    cout << char(ans + 'a');

    return 0;
}

