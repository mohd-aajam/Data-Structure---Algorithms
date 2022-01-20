#include<iostream>
using namespace std;

void print(int arr[], int n  , int start = 0) {//if we not pass start then it will take start as 0
//we can only assign default value from right side.
    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);
    cout << endl;
    print(arr, size, 2);


    return 0;
}