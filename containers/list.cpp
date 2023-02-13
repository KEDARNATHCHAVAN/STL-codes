#include <bits/stdc++.h>
using namespace std;

void show(list<int> l)
{
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;

    // push_back(), push_front()
    for (int i = 1; i <= 10; i++)
    {
        l.push_front(i * 10);
        l.push_back(i * 5);
    }
    show(l);

    // front(), back()
    cout << l.front() << endl;
    cout << l.back() << endl;

    // pop_front(), pop_back()
    l.pop_front();
    l.pop_back();
    show(l);

    // reverse(), sort()
    l.reverse();
    show(l);
    l.sort();
    show(l);

    return 0;
}