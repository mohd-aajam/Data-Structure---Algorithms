#include<iostream>
using namespace std;

int main()
{int sizeOFArray;
   cin>>sizeOFArray;
    int arr[sizeOFArray];

for(int i=0;i<sizeOFArray;i++)
{
   cin>>arr[i];
}
   int low=0 ,high=sizeOFArray-1;
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(int i=0;i<sizeOFArray;i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}