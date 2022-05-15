#include <bits/stdc++.h>
#define ll long long
using namespace std;

// given: 1,2,3,4,5,6,7,8,9
// show:  2,1,4,3,6,5,8,7,9

void alternateSwap(vector<int> &arr, int n)
{
    if (n ^ 1 != n + 1)
    { // if n is odd
        for (int i = 0; i < n - 1; i += 2)
            swap(arr[i], arr[i + 1]);
    }

    else
    {
        for (int i = 0; i < n - 2; i += 2)
            swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = v.size();

    alternateSwap(v, n);
    return 0;
}