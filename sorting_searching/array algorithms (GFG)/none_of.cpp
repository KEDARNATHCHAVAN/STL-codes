// C++ code to demonstrate working of none_of()
//none_of() This function returns true if none of elements satisfies the given condition else returns false. 
#include <iostream>
#include <algorithm> // for none_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] = {1, 2, 3, 4, 5, 6};

    // Checking if no element is negative
    none_of(ar, ar + 6, [](int x)
            { return x < 0; })
        ? cout << "No negative elements"
        : cout << "There are negative elements";

    return 0;
}
