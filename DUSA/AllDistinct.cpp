#include <bits/stdc++.h>
#define ll long long
using namespace std;

// this is ok

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr;
        for (ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            arr.push_back(x);
        }

        unordered_map<ll, ll> freq;

        // taking count
        for (ll i = 0; i < n; i++)
            freq[arr[i]]++;

        for( auto &it: freq){
            if(it.second % 2 == 0 && it.second > 2)
                it.second = 0;
            
            else if(it.second == 1)
                continue;
            
            else
                it.second = 1;
        }

        ll sum = 0;
        for(auto &it: freq){
            sum += it.second;
        }

        cout << sum << endl;
    }
    return 0;
}