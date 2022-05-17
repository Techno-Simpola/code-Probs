#include<bits/stdc++.h>
#define ll long long
using namespace std;

//binary search with loops

void binarySearchN(vector<int>& arr, int n, int x){
	int start = 0, end = arr.size()-1;
	int flag = 0;
	while(start < end){

		int mid = start + (end-start)/2;  //chalaki

		if(x > arr[mid]){
			start = mid + 1;
		}

		else if(x < arr[mid]){
			end = mid -1;
		}

		else if(x == arr[mid])
			flag = 1;
		else
			flag = -1;
	}

	if(flag == 1)
		cout << "Found" << endl;
	else
		cout << "The Element is not present in the given array" << endl;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = { 4,5,7,9,13,17 };
	int n = v.size(), x;
	cin >> x; //element to search
	binarySearchN(v, n, x);
	return 0;
}