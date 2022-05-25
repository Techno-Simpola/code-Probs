#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int>& vrr){

	int n = vrr.size();
	vector<int> ans;
	
	for(int i = 0; i < n; i++){
		if(vrr[i] != 0)
			ans.push_back(vrr[i]);
	}

	for(int i = 0; i < n; i++){
		if(vrr[i] == 0)
			ans.push_back(vrr[i]);
	}

	for(int i = 0; i < n; i++){
		cout << ans[i] << " ";
	}

}

int main(){

	vector<int> vrr = { 1,4,0,3,9,0,10,0 };

	solve(vrr);
	return 0;
}