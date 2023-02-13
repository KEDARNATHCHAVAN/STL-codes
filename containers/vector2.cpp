#include <bits/stdc++.h>
using namespace std;

void show(vector<int> v)
{
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> v;

    // assign()
    v.assign(10, 10);
    show(v);

    // push_back(), pop_back()
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.pop_back();
    show(v);

    // insert(), erase()
    v.insert(v.begin() + 5, 5);
    v.erase(v.begin() + 11);
    show(v);

    // clear()
    v.clear();
    cout << v.size() << endl;

    return 0;
}