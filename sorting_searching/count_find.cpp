#include <bits/stdc++.h>
using namespace std;

// count(start_address, end_address, key_element)
// find(start_address, end_address, key_element)

int main()
{
    vector<int> arr = {1, 2, 4, 3, 4, 2, 4, 6, 4, 3, 5};
    int key;
    cout << "\nEnter the element to be count : ";
    cin >> key;
    cout << "\nThe number of counts : " << count(arr.begin(), arr.end(), key);
    int key2;
    cout << "\nEnter the element to be searched : ";
    cin >> key2;
    find(arr.begin(), arr.end(), key2) != arr.end() ? cout << "\nElement found" : cout << "\nElement not found";
    return 0;
}