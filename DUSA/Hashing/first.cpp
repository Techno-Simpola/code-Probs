#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s = "aabdcdasdfascxczczasda";
	//find the count of each letter in the string...

	unordered_map<char, int> freq;

	for(int i = 0; i < s.length(); i++){
		char ch = s[i];
		freq[ch]++;
	}


	//map arranges the pair int the ascending order of the keys. 
	//O(logn) -> TC operations
	//whereas the unordered_map does not arrange the pair at all
	//O(1) -> TC operations that's why we should use unorder_maps,sets 
	for(auto &it: freq){
		cout << it.first << " " << it.second << endl;
	}
}