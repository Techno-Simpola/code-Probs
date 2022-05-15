#include <bits/stdc++.h>
#define ll long long
using namespace std;

void duplicatesInarray(vector<int> v, int size)
{

    map<int, int> freq; // to calc frequency of all the numbers

    for (int i = 0; i < size; i++) // 2,2,1,5,6,6
        freq[v[i]]++;

    for (auto it : freq)
    {
        if (it.second > 1)
            cout << it.first << " ";
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> v = {1, 2, 3, 1, 3, 6, 6};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    //     v.push_back(v[i]);
    // }

    duplicatesInarray(v, v.size());

    return 0;
}