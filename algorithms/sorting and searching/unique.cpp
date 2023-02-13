#include<bits/stdc++.h>
using namespace std;

//arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.

int main (){
    vector<int> arr = {2,3,5,3,2,5,6,3,4,7,6,1};
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    for (int i : arr)
        cout << i << " ";
    return 0;
}