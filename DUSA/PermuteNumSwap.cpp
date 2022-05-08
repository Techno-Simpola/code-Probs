#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(vector<int> nums, vector<vector<int>>& ans, int idx)
{
	//base case
	if(idx >= nums.size())
	{
		ans.push_back(nums);
		return;
	}

	for(int j=idx; j<nums.size(); j++)
	{
		swap(nums[idx], nums[j]);
		//recursion
		solve(nums, ans, idx+1);
		//backtrack
		swap(nums[idx], nums[j]);
	}

}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> nums;
	for(int i=0; i<nums.size(); i++)
		nums.push_back(i);
	
	vector<vector <int>> ans;
	int idx = 0;
	solve(nums, ans, idx);
	return 0;
}