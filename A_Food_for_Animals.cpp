#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (a + c >= x && b + c >= y && a+b+c>=x+y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}