#include<bits/stdc++.h>
#define ll long long
using namespace std;

int mountainArray(vector<int> arr, int n){

	int start = 0, end = n - 1;
	int ans;
	int mid = start + (start-end)/2;

	while(start < end){

	if(arr[mid] < arr[mid+1])
		start = mid + 1;
	
	else if(arr[mid] > arr[mid+1])
		end = mid;
	
	else if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
		{
			end = mid;
			ans = arr[mid];
		}
	mid = start + (start-end)/2;
	}
	return ans;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = { 3,4,5,1 };
	int n = v.size();

	int ans = mountainArray(v, n);
	cout << ans << endl;
	return 0;
}