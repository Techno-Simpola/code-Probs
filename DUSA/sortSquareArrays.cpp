#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> vals = { -6,0,-1,2,4,5 };
	// vector<int> ans;

	for(int i=0;i<vals.size();i++){
		vals[i] = vals[i]*vals[i];
	}

	sort(vals.begin(),vals.end());

	for(int i=0;i<vals.size();i++){
		cout<<vals[i]<<" ";
	}

	cout << endl;
	return 0;
}