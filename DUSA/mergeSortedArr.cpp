#include<bits/stdc++.h>
#define ll long long
using namespace std;

//merging two sorted arrays
vector<int> solve(vector<int>& v1, vector<int>& v2, int n, int m){

	int idx1 = 0, idx2 = 0;
	int mainArrIdx = 0;
	vector<int> ans;

	while( idx1 < n && idx2 < m )
	{
		if(v1[idx1] < v2[idx2])
			ans.push_back(v1[idx1++]);
		else
			ans.push_back([idx2++]);
	}

	while( idx1 < n ){
		ans.push_back(v1[idx1]);
	}

	while( idx2 < m ){
		ans.push_back([idx2]);	
	}

	return ans;
}

int main()
{	
	vector<int> v1 = { 1,2,3,0,0,0 };
	vector<int> v2 = { 2,5,6 };

	int n, m; cin >> n >> m;
	vector<int> ans = solve(v1,v2,n,m);

	for(int i=0;i<ans.size(); i++)
		cout << ans[i] << " ";
	cout << endl; 
	return 0;
}