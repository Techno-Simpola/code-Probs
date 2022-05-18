#include<bits/stdc++.h>
#define ll long long
using namespace std;

int findPivot(vector<int> arr, int n){
  	
	int s=0, e=n-1, m=s+(e-s)/2, ans;

	while(s<e){

		if(arr[m] >= arr[0])
			s=m+1;
		else
			e=m;
		m=s+(e-s)/2;
	}

	return s; // returning pivot index
}


int binSearch(vector<int> arr, int s, int e, int x){

	int start = s, end = e;
	int mid = start + (end-start)/2;
	while(start < end){

		if(x > arr[mid])
			start = mid + 1;
		

		else if(x < arr[mid])
			end = mid -1;
		

		else if(x == arr[mid])
			return mid;

		mid = start + (end-start)/2;
	}

	return -1;
}


int searchRotArr(vector<int> arr, int n, int x){

	int pivotIdx = findPivot(arr, n); //getting the pivot element
	
	if(x >= arr[pivotIdx] && x <= arr[n-1])
		return binSearch(arr, pivotIdx, n-1, x);	

	else //element present hai pivot wale element ki cycle
		return binSearch(arr, 0, pivotIdx-1, x);
	
}

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = { 8, 4 };
	int n = v.size();
	int x; cin >> x;
	int ans = searchRotArr(v, n, x);
	cout << ans << endl;
	return 0;
}