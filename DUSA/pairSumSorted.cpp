#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> pairSum(vector<int>& arr, int s){
	
	vector<vector<int>> upperAns;
	
	for(int i = 0 ; i < arr.size() ; i++){
	
		for(int j = i + 1; j < arr.size(); j++){   
	
			if(arr[i]+arr[j] == s)
	
			{
				vector<int> innerAns;
				innerAns.push_back(min(arr[i],arr[j]));
				innerAns.push_back(max(arr[i],arr[j]));
				upperAns.push_back(innerAns);
			}
	
		} 
	
	}
	
	sort(upperAns.begin(), upperAns.end());
	
	return upperAns;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
	#endif

	vector<int> arr = { 1,5,2,7,2,8,9 };
	int s = 10;

	vector< vector<int> > ans = pairSum(arr, s);
	for(int i = 0; i < ans.size(); i++){
		for(int j = 0; j < ans[i].size(); j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}