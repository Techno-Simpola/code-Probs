#include <bits/stdc++.h>
#define ll long long;
using namespace std;

void solve(vector<int> nums, int index, vector<int> output, vector<vector<int>> &ans)
{

    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // case in which we exlude
    solve(nums, index + 1, output, ans);

    // case in which we include
    output.push_back(nums[index]);
    solve(nums, index + 1, output, ans);
}

vector<vector<int>> powerSetArray(vector<int> &nums, int size)
{

    vector<vector<int>> ans;
    vector<int> output;

    int index = 0;
    solve(nums, index, output, ans);
    return ans;
}

int main()
{

    vector<int> nums = {1, 2, 3};
    int size = nums.size();

    vector<vector<int>> ans = powerSetArray(nums, size);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}