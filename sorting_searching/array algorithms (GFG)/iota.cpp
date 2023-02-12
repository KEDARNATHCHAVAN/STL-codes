// C++ code to demonstrate working of iota()
/*iota() This function is used to assign continuous values to array.
 This function accepts 3 arguments, the array name, size, and the starting number. */

#include <iostream>
#include <numeric> // for iota()
using namespace std;
int main()
{
    // Initializing array with 0 values
    int ar[6] = {0};

    // Using iota() to assign values
    iota(ar, ar + 6, 20);

    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i = 0; i < 6; i++)
        cout << ar[i] << " ";

    return 0;
}
