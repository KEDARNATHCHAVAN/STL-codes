#include <bits/stdc++.h>
using namespace std;

int main (){
    unordered_map<int, string> m;
    m[3] = "kedar";
    m[3] = "nath";
    m[1] = "chavan";
    m[8] = "walchand";
    m[4] = "college";
    m.insert(make_pair(2,"hello"));
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    //begin, end, count, find, empty, erase
    
    return 0;
}