#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll time; cin>>time;
    while (time--)
    {
        ll n;
        cin >> n;
        ll array[n];
        for (ll i = 0; i < n; i++)
            cin >> array[i];

        ll count = 0;
        
        for (ll i = n - 2; i > -1; i--)
        {
            while (array[i + 1] <= array[i] && array[i])
            {
                array[i] /= 2;
                count++;
            }
        }
        
        bool fail = false;
        for (ll i = 0; i < n - 1; i++)
        {
            if (array[i + 1] <= array[i])
                fail = true;
        }
        
        if (fail)
            cout << "-1\n";
        
        else
            cout << count << "\n";
    }

    return 0;
}