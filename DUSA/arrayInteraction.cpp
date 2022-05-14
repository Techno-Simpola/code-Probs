#include <bits/stdc++.h>
#define ll long long
using namespace std;

void arrayInteraction(vector<int> v1, vector<int> v2)
{
    vector<int> ans;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] == v2[j])
                ans.push_back(v1[i]);
        }
    }

    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> v1 = {1, 2, 4, 3, 6, 7};
    vector<int> v2 = {2, 9, 10, 12, 5, 4};

    // have to find the common elements in both of the array...
    arrayInteraction(v1, v2);
    return 0;
}