#include<bits/stdc++.h>
#define ll long long
using namespace std;

int pivotIndex(vector<int>& arr){

	int n = arr.size();
	int sumL[n], sumR[n];

	sumL[0] = 0;
	
	for(int i=1; i<n-1; i++)
		sumL[i] = sumL[i-1] + arr[i-1];
	
	sumR[n-1] = 0;
	
	for(int j=n-2; j>=0; j--)
		sumR[j] = sumR[j+1] + arr[j+1];

	for(int i=0; i<n; i++){
		if(sumL[i]==sumR[i])
			return i;
	}

	return -1;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = { 1,7,3,6,5,6 };
	int pi = pivotIndex(v);
	
	cout << pi << endl;

	return 0;
}