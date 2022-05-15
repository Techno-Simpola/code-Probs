#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> solve(vector<int> &arr, int n)
{

    map<int, int> mp;
    vector<int> v;

    sort(arr.begin(), arr.end());

    if (n == 0 || n == 1)
        return v;
    int idx = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            mp[idx] = arr[i];
            idx++;
        }
    }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    return v;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> v = {4, 2, 1, 4, 4, 3, 3, 5, 5, 7, 1, 9, 10, 14};
    int n = v.size();

    vector<int> ans = solve(v, n);

    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans[i] << " ";
}