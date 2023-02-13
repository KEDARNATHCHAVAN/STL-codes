#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 10> a = {2, 3, 4, 53, 4, 6, 7, 56, 8, 0};

    // at(), get()
    cout << a.at(4) << endl;
    cout << get<5>(a) << endl;

    // front(), back()
    cout << a.front() << endl;
    cout << a.back() << endl;

    // size(), max_size()
    cout << a.size() << endl;
    cout << a.max_size() << endl;
    return 0;
}