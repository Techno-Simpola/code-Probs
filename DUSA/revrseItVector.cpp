#include <bits/stdc++.h>
using namespace std;

void solve(vector<char>& s, int start, int end){
        
        //base case
        if(start > end)
        	return;
        
        swap(s[start], s[end]);
        
        //recurive call
        solve(s, start+1, end-1);
}

int main() {
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<char> s = { 'h','e','l','l','o' };
	int size = s.size();
	solve(s, 0, size-1);

	for(int i = 0; i < size; i++){
		cout << s[i] << " ";
	}
	return 0;
}