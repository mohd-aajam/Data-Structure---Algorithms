#include<bits/stdc++.h>

using namespace std;
struct myHash{
    int *array;
    int cap,size;
    int arr=[];//from myyy openion
    myHash(int c)
    {
        cap=0;
        size=0;
        for(int i=0;i<cap;i++)
        arr[i]=-1;
    }
    int hash(int key)
    {
        int hash(int key)
    }
    //} should not here...

    bool insert(int key)
    {
        if(size==cap)
        return false;
        int i=hash(key);
        while(arr[i]!=-1&&arr[i]!=-2&&arr[i]!=key)
        i=(i+1)%cap;
        if (arr[i]==key)
        return false;
        else
        {
            arr[i]=key;
            size++;
            return true;
        }
    }
}
int main()
{
    return 0;
}