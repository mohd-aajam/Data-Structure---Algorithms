// C++ program to illustrate macros
#include <iostream>
using namespace std;

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b)) // before compiling compiler will put (((a) < (b)) ? (a) : (b)) where it see name min(a, b)
#define LIMIT 5
#define AREA(az, a) (az * a)

// Driver Code
int main()
{
    int a = 18;
    int b = 76;

    cout << "Minimum value between"
     << a << " and " << b
    << " is: " << min(a, b) << endl;
    cout << LIMIT<<endl;

    int length = 10, bradth = 5, area;
    area = AREA(length, bradth);
    // Print the area
    cout << "Area of rectangle"
         << " is: "<< area;
    return 0;
}
