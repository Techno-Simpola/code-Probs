#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n)
{
    ll total_coins = n * 50;
    ll profit = total_coins * .3;

    cout << profit << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n; // n-> number of glasses sold
        cin >> n;
        solve(n);
    }
    return 0;
}