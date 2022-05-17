#include<bits/stdc++.h>
#define ll long long
using namespace std;

void rotatedPiv(vector<int> arr, int n){

	int s=0, e=n-1;
	int m=s+(e-s)/2;

	while(s<e){

		if(arr[m] > arr[0])
			s=m+1;
		else
			e=m; 
		m=s+(e-s)/2;
	}

	cout << "Pivot index of this array is = " << s << endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = { 7,8,9,1,2,3 }; //pivot = 1
	int n = v.size();
	rotatedPiv(v, n);
}