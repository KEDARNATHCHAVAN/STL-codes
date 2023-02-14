#include <bits/stdc++.h>
using namespace std;

// Sets are a type of associative container in which each element has to be unique because the value of the element identifies it.
// The values are stored in a specific sorted order i.e. either ascending or descending.

void show_asc(set<int> s)
{
    for (auto i : s)
        cout << i << " ";
    cout << endl;
}

void show_des(set<int, greater<int>> s)
{
    for (auto i : s)
        cout << i << " ";
    cout << endl;
}

int main()
{
    // ascending
    set<int> s = {4, 5, 67, 2, 34, 65, 1};
    // descending
    set<int, greater<int>> ss = {4, 5, 67, 2, 34, 65, 1};

    // insert()
    s.insert(0);
    s.insert(4);
    show_asc(s);
    show_des(ss);

    // begin(), end(), size(), max_size()
    cout << *s.begin() << endl;
    cout << s.size() << endl;
    cout << s.max_size() << endl;

    // erase(), clear()
    s.erase(1);
    show_asc(s);
    s.clear();
    return 0;
}

// multisets are same as sets but they can store repeated element, whereas sets store unique elements