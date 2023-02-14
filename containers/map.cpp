#include <bits/stdc++.h>
using namespace std;

// Maps are associative containers that store elements in a mapped fashion.
// Each element has a key value and a mapped value. No two mapped values can have the same key values.

int main()
{
    map<int, string> m;

    m[1] = "kedarnath";
    m[3] = "prasad";
    m[2] = "chavan";

    auto i = m.begin();
    while (i != m.end())
    {
        cout << i->first << " " << i->second << endl;
        i++;
    }   

    cout << m.size() << endl;

    // assign one map to other map
    map<int, string> m2(m.begin(), m.end());
    auto j = m2.begin();
    while (j != m2.end())
    {
        cout << j->first << " " << j->second << endl;
        j++;
    }

    cout << m.count(2) << endl;
    return 0;
}

// Multimap is similar to a map with the addition that multiple elements can have the same keys. 
// Also, it is NOT required that the key-value and mapped value pair have to be unique in this case. 
// One important thing to note about multimap is that multimap keeps all the keys in sorted order always. 
// These properties of multimap make it very much useful in competitive programming.