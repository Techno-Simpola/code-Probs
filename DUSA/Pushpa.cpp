#include <bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

void solve(int n, lli arr[])
{
    ll mh = 0, maxH = 0;
    // have to find frequency of elements in this one
    unordered_map<lli, lli> freq;

    for (auto i = 0; i < n; i++)
        freq[arr[i]]++; // calculated frequencies

    // main operation === hieght + (freq-1)
    for (auto it : freq)
    {
        mh = it.first + (it.second - 1);

        if (maxH < mh)
            maxH = mh;
    }

    cout << maxH << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        lli arr[n];

        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        solve(n, arr);
    }
}