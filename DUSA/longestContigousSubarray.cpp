#include <bits/stdc++.h>
#define ll long long
using namespace std;

//sliding windows approach (important)
void largetContiguousSubArr(vector<int> arr){

	int ansG = 1;
	int ansL = 1;
	int n = arr.size();

	for(int i=1; i<n; i++){

		if(arr[i] > arr[i-1])
			ansL++;
		else
			ansL = 1;

		ansG = max(ansG, ansL);
	}

	cout << "This is the maximum number of increasing contiguous" << endl;
	cout << ansG << endl;
}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = {1,3,5,4,7};
	//you have to find the largest contiguous subsequence of the array...

	largetContiguousSubArr(v);

	return 0;
}