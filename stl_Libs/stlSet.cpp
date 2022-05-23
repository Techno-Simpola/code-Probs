#include <iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

//gets element in sorted manner and takes an element only once

int main() {

    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(1);
    s.insert(4);
    s.insert(9);
    s.insert(0);
    s.insert(0);
    s.insert(9);

    for(auto i:s)
        cout << i << " ";
    cout << endl;

    set<int>:: iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto i:s)
        cout << i << " ";
    cout << endl;

    //finds whether the element is there or not...
    cout << "Find the element of 5 = " << s.count(5) << endl; //bool

    cout << endl;

    set<int>::iterator itr = s.find(3);

    cout << "Value present at itr = " << *itr << endl;
}    