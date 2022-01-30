#include<iostream>
using namespace std;

//inline function will not take more then 3 lines of code
inline int getMax(int& a, int& b) {
//compiler will replace everything with (a>b) ? a : b;  where it sees getMax(a,b)
    return (a>b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;



    return 0;
}