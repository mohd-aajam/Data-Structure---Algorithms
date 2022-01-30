#include<bits/stdc++.h>
using namespace std;
struct myhash ;
{
int bucket ;
list<int>*table;
myhash (int b) {bucket = b; table = new list <int> [bucket];}
int hash (int key) {return(key % bucket);}
void inert (int key)
{
    int i=hash (key);
    table[i].push_back(key);
}

}
int main()
{


    return 0;
}