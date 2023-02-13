// C++ code to demonstrate working of all_of()
/*all_of() This function operates on whole range of array elements and can save time to run a loop to check each elements one by one. 
It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false. */

#include <iostream>
#include <algorithm> // for all_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] = {1, 2, 3, 4, 5, -6};

    // Checking if all elements are positive
    all_of(ar, ar + 6, [](int x)
           { return x > 0; })
        ? cout << "All are positive elements"
        : cout << "All are not positive elements";

    return 0;
}
