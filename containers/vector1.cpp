#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    for (int i = 1; i <= 10; i++)
        arr.push_back(i);

    // begin() and end()
    for (auto i = arr.begin(); i != arr.end(); i++)
        cout << *i << " ";
    cout << endl;

    // rbegin() and rend()
    for (auto j = arr.rbegin(); j != arr.rend(); j++)
        cout << *j << " ";
    cout << endl;

    // size(), max_size(), capacity()
    cout << arr.size() << endl;
    cout << arr.max_size() << endl;
    cout << arr.capacity() << endl;

    // front(), back()
    cout << arr.front() << endl;
    cout << arr.back() << endl;

    return 0;
}