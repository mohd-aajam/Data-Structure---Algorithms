#include <iostream>
#include <algorithm>
using namespace std;

int merge(int arr1[], int arr2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[j] < arr2[i])
                swap(arr1[j], arr2[i]);
            sort(arr1, arr1 + m);
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    for (int i = 0; i < m; i++)
        cout << arr1[i] << " ";
}

int main()
{
    int n, m;

    cout << "Array 1 size:- " << endl;
    cin >> n;

    int arn[n];
    cout << "Array 1 elements:- " << endl;
    for (int i = 0; i < n; i++)
        cin >> arn[i];

    cout << "Array 2 size:- " << endl;
    cin >> m;

    int arm[m];
    cout << "Array 2 elements:- " << endl;
    for (int i = 0; i < m; i++)
        cin >> arm[i];

    merge(arn, arm, n, m);

    return 0;
}