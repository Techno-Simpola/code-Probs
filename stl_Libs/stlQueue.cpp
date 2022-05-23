#include <iostream>
#include<bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
  queue<string> q;

    q.push("Ashutosh");
    q.push("Kumar");
    q.push("Singh");
    q.push("Rathore");

    cout << q.front() << endl;
    cout << "Size before pop = " << q.size() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << "Size after pop = " << q.size() << endl;
    cout << "Empty or not = " << q.empty() << endl;
    return 0;
}