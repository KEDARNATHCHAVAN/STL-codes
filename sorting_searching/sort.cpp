#include <bits/stdc++.h>
using namespace std;

//sort(start_address, end_address+1)
//sort(start_address, end_address, greater<int>()) - for descending order

int main()
{
    int arr[] = {1, 4, 5, 6, 2, 6, 7, 43};
    //sort(begin(arr), end(arr));
    sort(arr, arr+sizeof(arr)/sizeof(int));
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(arr, arr+sizeof(arr)/sizeof(int), greater<int>());
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}