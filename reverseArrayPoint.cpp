#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> reverseArrayPoint(vector<int> &v, int end, int m){

	//base case
	if(m > end)
		return v;

	swap(v[m], v[end]);

	//recursive call
	return reverseArrayPoint(v, end-1, m+1);

}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> vrr = { 1,2,3,4,7,5,10 };
	int m = 3;

	int size = vrr.size();
	vector<int> ok = reverseArrayPoint(vrr, size-1, m+1);
	
	for( auto it: vrr )
		cout << it << " ";
	return 0;
}