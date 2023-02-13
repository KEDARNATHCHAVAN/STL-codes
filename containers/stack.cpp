#include <bits/stdc++.h>
using namespace std;

void show (stack<int> s){
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main (){
    stack<int> s;
    for (int i=1; i<=10; i++)
        s.push(i*2);
    show(s);

    s.pop();
    s.pop();
    show(s);

    cout << s.top() << endl;
    cout << s.size() << endl;
    
    return 0;
}