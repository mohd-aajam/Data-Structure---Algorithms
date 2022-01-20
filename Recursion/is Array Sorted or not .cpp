#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[] = {2, 3, 6, 8, 9, 11, 15};
    int size = sizeof(arr) / sizeof(int);
    int ans = isSorted(arr, size);
    if (ans)
        cout << "Array is sorted ";
    else
        cout << "Array is not sorted";

    return 0;
}