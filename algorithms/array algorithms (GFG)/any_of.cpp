// C++ code to demonstrate working of any_of()
/*any_of() This function checks for a given range if there’s even one element satisfying a given property mentioned in function. 
Returns true if at least one element satisfies the property else returns false. */

#include <iostream>
#include <algorithm> // for any_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] = {1, 2, 3, 4, 5, -6};

    // Checking if any element is negative
    any_of(ar, ar + 6, [](int x)
           { return x < 0; })
        ? cout << "There exists a negative element"
        : cout << "All are positive elements";

    return 0;
}
