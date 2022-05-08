#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll i, ll j)
{
    // to print the total number of cells that are under attack by the queen.
    ll count = 0;

    count = (n - i) + (n - j) + (i - 1) + (j - 1); // side boxes
    ll count_1 = min(i - 1, j - 1);
    ll count_2 = min(n - j, i - 1);
    ll count_3 = min(n - i, j - 1);
    ll count_4 = min(n - i, n - j);
    count = count + count_1 + count_2 + count_3 + count_4;
    cout << count << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        solve(n, x, y);
    }
}