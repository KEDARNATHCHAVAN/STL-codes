#include <bits/stdc++.h>
using namespace std;

void show(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;

    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }
    show(q);

    q.pop();
    show(q);

    cout << q.front() << endl;

    cout << q.back() << endl;

    cout << q.size() << endl;

    return 0;
}