#include <bits/stdc++.h>
using namespace std;

// binary_search(start_address, end_address+1, key_element)

int main()
{
    int arr[] = {2, 4, 5, 6, 2, 1, 6, 3, 7, 5};
    int key;
    cout << "\nEnter the key element : ";
    cin >> key;
    sort(arr, arr + sizeof(arr) / sizeof(int));
    bool flag = binary_search(arr, arr + sizeof(arr) / sizeof(int), key);
    if (flag)
        cout << "\nElement found ";
    else
        cout << "\nElement not found";
    return 0;
}