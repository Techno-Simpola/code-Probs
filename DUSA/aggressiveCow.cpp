#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPossible(vector<int> arr, int m, int k)
{

    int cntCow = 1;
    int lastPos = arr[0];
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {

        if (arr[i] - lastPos >= m)
        {
            cntCow++;

            if (cntCow == k)
                return true;

            lastPos = arr[i];
        }
    }
    return false;
}

int aggCow(vector<int> &arr, int maxi, int k)
{

    int start = 0;
    int end = maxi;
    int mid = start + (end - start) / 2;

    sort(arr.begin(), arr.end()); // 1, 2, 3, 4, 6
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(arr, mid, k))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << ans << endl;
    return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> v = {4, 2, 1, 3, 6};
    int k;
    cin >> k;
    cout << k << endl;
    int maxi = *max_element(v.begin(), v.end());

    int ans = aggCow(v, maxi, k);

    cout << ans << endl;
}
