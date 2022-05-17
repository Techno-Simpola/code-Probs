#include<bits/stdc++.h>
#define ll long long
using namespace std;


//number of total occurenrces of a number in a sorted array
int firstOcc(vector<int> arr, int n, int x){

	int ans = -1, start = 0, end = n - 1;
	int mid = start + (end-start)/2;
	while(end >= start){

		if(arr[mid] == x){
			ans = mid;
			end = mid - 1;
		}

		else if(arr[mid] > x){
			end = mid - 1;
		}

		else if(arr[mid] < x){
			start = mid + 1;
		}
		mid = start + (end-start)/2;
	}

	return ans;
}

int lastOcc(vector<int> arr, int n, int x){

	int ans = -1, start = 0, end = n - 1;
	int mid = start + (end-start)/2;
	while(end >= start){

		if(arr[mid] == x){
			ans = mid;
			start = mid + 1;
		}

		else if(arr[mid] > x){
			end = mid - 1;
		}

		else if(arr[mid] < x){
			start = mid + 1;
		}
		mid = start + (end-start)/2;
	}

	return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> arr = { 3, 4,5,5,5,8,9 };
	int n = arr.size();
	int x; cin >> x;

	int locc = firstOcc(arr,n,x);
	int rocc = lastOcc(arr,n,x);
	cout << locc << " " << rocc << endl;
	cout << "Total occ = " << rocc - locc + 1 << endl;
	return 0;
}