#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int x, int y)
{

    if (y <= 1.07 * x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;       // x-> fastest time of a lap
        cin >> x >> y; // y-> chef's time of a lap
        solve(x, y);
    }
    return 0;
}