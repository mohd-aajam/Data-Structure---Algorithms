#include<bits/stdc++.h>
using namespace std;
int sl_find(int a[], int n)
{
    int res=-1;
    int mx = 0;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>>a[mx])
        {
            res=mx;
            mx=i;
        }
        else if(a[i]!=a[mx])
        {
            if(res==-1 || a[i]>a[res])
            {
                res=i;
            }
        }
    }
    return res;
};
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<sl_find(a,n)<<endl;
    return 0;
}