#include <bits/stdc++.h>
using namespace std;

//hold and provide mathematical operations on arrays effi

int main (){
    valarray<int> arr = {2,4,6,2,3,6,7,54,6,7};
    
    //apply()
    valarray<int> arr1;
    arr1 = arr.apply([](int x){return x=x+5;});
    for (int i : arr1) 
        cout << i << " ";
    cout << endl;

    //sum()
    cout << arr.sum() << endl;

    //min()
    cout << arr.min() << endl;

    //max()
    cout << arr.max() << endl;

    return 0;
}