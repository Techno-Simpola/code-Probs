#include<bits/stdc++.h>
#define ll long long
using namespace std;

void firstAndLastPos(vector<int>& arr, int n, int x){

	int lm = -1, rm = -1;
	for(int i = 0; i < n; i++){

		if(arr[i] == x){
			lm = i;
			break;	
		}
	}
	for(int i = 0; i < n; i++){

		if(arr[i] == x){
			rm = i;	
		}
	}

	cout << "leftmost = " << lm << endl;
	cout << "rightmost = " << rm << endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = { 0,1,1,2,3,5,5,5 };
	int n = v.size();
	int key ; cin >> key;
	
	firstAndLastPos(v, n, key);
	return 0;
}