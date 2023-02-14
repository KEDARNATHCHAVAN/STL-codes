#include <bits/stdc++.h>
using namespace std;

// Unordered_set is a set in which key can be stored in any order

void show(unordered_set<int> s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(7);
    s.insert(2);
    s.insert(6);
    s.insert(44);
    show(s);

    // insert, begin, end, count, find, clear, erase, size, max_size - same as other
    return 0;
}