#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{

    int start = 0;
    int n = nums.size();
    int end = n - 1;
    int i = end;
    vector<int> ans(n, 0);

    while (i >= 0)
    {

        if (abs(nums[start]) > abs(nums[end])){
            ans[i] = nums[start] * nums[start];
            start++;
            i--;
        }
        else{
            ans[i] = nums[end] * nums[end];
            end--;
            i--;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {-4,-1,0,3,10};

    vector<int> ans;
    ans = sortedSquares(nums);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}